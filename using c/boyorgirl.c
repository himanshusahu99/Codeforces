#include<stdio.h>
#include<string.h>
int main()
{
    char string[110];
    int count=0,i,j,k,flag,n;

     //ipoute string
     scanf("%s",string);
     n=strlen(string);

     for(i=0; i<n ; i++)
     {
         for(j=i+1; j<n; j++)
         {
             if(string[i]==string[j])
             {
                 for(k=j; k<n; k++ )
                 {
                     string[k]=string[k+1];
                  }
                 n--;
                 j--;
             }

         }
     }

     for(i=0; i<n; i++)
       count++; //counting no. of distinct character

     if(count%2==0)
        printf("CHAT WITH HER!");
     else
        printf("IGNORE HIM!");

     return 0;
}
