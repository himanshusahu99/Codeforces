#include<stdio.h>
void compare(char *, char *);
int main()
{
    char ori[100],text[100];
    int i,j;
    //enter original string
    scanf("%s",ori);
    //enter texr
    scanf("%s",text);
    for(i=0; text[i]!='\0'; i++)
    {
        for(j=0; ori[i]!='\0'; i++ )
        {
            compare( *(text+i), *(ori+j) );
        }
    }
    return 0;

}

void compare(char *a, char*b)
{

}
