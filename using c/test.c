#include<stdio.h>
#include<string.h>
int main()
{
     int i;
    char name[200];
    gets(name); // input the word
    name[0]=name[0]-32;

    for(i=0; name[i]!='\0'; i++ )
    {
        if(name[i]==' ')
        {
             printf(" %c",name[i+1]-32);
            //name[i+1]=name[i]-32;

        }
        else
            printf("%c",name[i]);

    }
 // printf("%d",strlen(name));
    return 0;

}
