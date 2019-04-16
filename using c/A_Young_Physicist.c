#include<stdio.h>
int main()
{
   int n, x,y,z,s1=0,s2=0,s3=0,i;
   // s1 = sum of cordinate x , similarly for y,z;

      //input no. of lines
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
           scanf("%d%d%d",&x,&y,&z);
           s1+=x;
           s2+=y;
           s3+=z;
    }

       if(s1==0 && s2==0 && s3 == 0)
        printf("YES");
        else
            printf("NO");

     return 0;

    }
