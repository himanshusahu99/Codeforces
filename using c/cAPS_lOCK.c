#include<stdio.h>
int main()
{
    char p[102];
    int i,j;

    gets(p);//inpute string

    if( (p[0] >=97 && p[0] <=122 )  )
    {
        p[0] = p[0] - 32;

        for(i=1 ; p[i]!='\0'; i++)
        {
            p[i] = p[i] + 32;
        }
    }

    else if ((p[1] >= 65 && p[1] <=90 ))
    {

        for(i=1; p[i]!='\0'; i++)
        {
            p[i] = p[i] +32;
        }
    }

    printf("%s",p);

    return 0;
}
