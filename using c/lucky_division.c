#include<stdio.h>
int main()
{
    int n,m,r,flag=0;

    scanf("%d",&n);//input Number
    m=n;
    while(n>0)
    {
        r=n%10;


        if(r==4 || r==7 )
        {
            flag=0;

        }
        else
        {
            flag=1;
            break;
        }
        n=n/10;
    }

    n=m;


    if(flag == 1)
    {
        if (n==1 || n==2 || n==3)
            flag=1;
        else if (  (n%4==0) || (n%7==0)  )
        {
           // if(((n/4)%2==0) ||  ( (n/7)%2==0))
                flag=0;
        }

    }

    if(flag==0)
        printf("YES");
    else
        printf("NO");
    return 0;


}
