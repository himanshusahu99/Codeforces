#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h3,m3,th,tm;
    //input time1 and time2
    scanf("%d%*c%d", &h1,&m1);
    scanf("%d%*c%d", &h2,&m2);
    //printf("%d   %d",h1,m1);
    //printf("\n%d   %d\n",h2,m2);


    if(m1 > m2)
    {
        h2 -=1;
        m2+=60;
    }
    h3= h2-h1;
    m3=m2-m1;



    if (h3 == 1)
    {
        th  = 0;
        tm =30;
    }
  else if ( h3 %2==0)
    { th = h3/2;
    tm=m3/2;


    }
    else if ( h3%2!=0)
    {
          th = h3/2 ;
          tm=m3/2 +30;





    }

    /*if (tm>=60)
          {
              th = th + tm/60;
              tm = tm%60;
          }
*/
    h1 = h1+th;
    m1 = m1+tm;
    h3 = h1;
    m3=m1;
    if(m3 >=60)
    {
        h3= h3 + m3/60;
        m3 = m3%60;
    }



    //printf("%d   %d\n",h3 ,m3);

    if (h3 <10 && m3 >=10)
        printf("0%d:%d",h3,m3);

    else if (h3 <10 && m3 <10)
        printf("0%d:0%d",h3,m3);

    else  if(h3 >=10  && m3 <10)
        printf("%d:0%d",h3,m3);

    else  if(h3 >=10  && m3 >=10)
        printf("%d:%d",h3,m3);

    return 0;
}

