#include<stdio.h>
int main()
{
        int i,j=0 ;
        char s[105];    //word s
        char h[]= "hello";
        scanf("%s",s);  //input s

        for(i=0; s[i]!='\0'; i++)
        {
            if( h[j] == s[i] )
            {
                j++;
            }

        }

        if(j==5 ) // no. of character in "hello" = 5
            printf("YES");
        else
            printf("NO");
}
