//***SIMPLE INTEREST***
#include<stdio.h>
void main()
{
    float p,t,r,si;
    printf("Enter Principal amount, Time and Rate of Interest : ");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple Interest is = %g",si);
}