#include<stdio.h>
#include<string.h>
int main()
{
    int i,count =0;
    char word[200];
    gets(word); // input the word

//capitalization of first character
    if(word[0] >= 'a' && word[0] <='z' )
        word[0]=word[0]-32;


    for(i=0; word[i]!='\0'; i++ )
    {
        if(word[i]==' ')
        {
            if(word[i+1] >= 'a' && word[i+1] <='z' )
            {
               printf(" %c",word[i+1]-32);
               i++;
                }

        }
        else
            printf("%c",word[i]);
    }

// printf("%d",strlen(word));
    return 0;

}
