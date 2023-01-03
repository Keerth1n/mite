//***DAY OF GIVEN DATE ZELLER'S RULE***
#include<stdio.h>
#include<math.h>
void main()
{
    int d,m,y,k,j,h;
    printf("Enter the date (DD/MM/YYYY format) ");
    scanf("%d%d%d",&d,&m,&y);
    if(m==1)
    {
        m=13;
        y--;
    }
    if (m==2)
    {
        m=14;
        y--;
    }
    k=y%100;
    j=y/100;
    h=d+(13/5*(m+1))+k+k/4+j/4+5*j;
    h=h%7;
    switch (h)
    {
    case 0:printf("Saturday\n");
           break;
    case 1:printf("Sunday\n");
           break;
    case 2:printf("Monday\n");
           break;
    case 3:printf("Tuesday\n");
           break;
    case 4:printf("Wednesday\n");
           break;
    case 5:printf("Thursday\n");
           break;
    case 6:printf("Friday\n");
           break;
    }
}