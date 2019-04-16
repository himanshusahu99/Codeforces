#include<stdio.h>
int main()
{
    int n,k,w, tnd=0,i;
    //n= no. of bananas , k=cost of each banana, w =  no. of dollars he has , total dollars to be spent

    //input values
    scanf("%d%d%d",&k,&w,&n);

     for(i=0; i<=n; i++)
        tnd = k*i+tnd;

     if (w >= tnd)
        printf("0");
     else
        printf("%d",tnd-w);

     return 0;

    }
