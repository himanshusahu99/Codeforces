#include <stdio.h>
int main()
{
    int n,j,i ,a[1010],b[1010],c[1010],sum=0,temp;
    //enter no. of stops
    scanf("%d",&n);

  for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);

        c[i]=sum+b[i]-a[i];
        sum=c[i];
    }

 for(j=0;j<n-1;++j)
    for(i=0;i<n-j-1;++i)
    {
        if(c[i]>c[i+1])
        {
            temp=c[i];
            c[i]=c[i+1];
            c[i+1]=temp;
        }
    }

 printf("%d",c[n-1]);
 return 0;
}
