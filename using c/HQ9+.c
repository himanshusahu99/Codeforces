#include<stdio.h>
int main()
{
    char    p[102];
    int i, j, flag = 0;

    gets(p); // inpute string

    for(i=0; p[i]!='\0'; i++)
    {
        if(p[i]=='H' || p[i] == 'Q'  || p[i] == '9'  )
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("NO");
    else
        printf("YES");

    return 0;
}
