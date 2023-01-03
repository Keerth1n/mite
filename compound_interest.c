//***COMPOUND INTEREST***
#include <stdio.h>
#include <math.h>
void main()
{
    float p,t,r,ci;
    printf("Enter the principal amount, Time and Rate of Interest : ");
    scanf("%f%f%f",&p,&t,&r);
    ci=p*(pow((1+r/100),t))-p;
    printf("Compound Interest = %g",ci);
}