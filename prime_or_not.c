//***PRIME OR NOT***
#include<stdio.h>
int method1(int n)
{
    printf("Method 1\n");
    if(n>0)
    {
        if (n==1)
            printf("Neither prime nor composite number\n");
        else if(n==2||n==3)
        {
            printf("Prime\n");
            return 0;
        }
        else
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    printf("Not prime\n");
                    return 0;
                }
                printf("Prime\n");
                return 0;
            }
    }
}
int method2(int n)
{
    printf("Method 2\n");
    if(n>0)
    {
        if (n==1)
            printf("Neither prime nor composite number\n");
        else if(n>3&&(n%2==0||n%3==0))
            printf("Not prime\n");
        else
        {
            for(int i=5;i*i<=n;i+=6)
            {
                if(n%i==0||n%(i+2)==0)
                {
                    printf("Not prime\n");
                    return 0;
                }
            }
            printf("Prime\n");
        }
    }
    else
        printf("Invalid number");
    return 0;
}
int method3(int n)
{
    printf("Method 3\n");
    if (n==1)
    {    
        printf("Neither prime nor composite number\n");
        return 0;
    }
    else
    {
        if(n==2||n==3)
        {
            printf("Prime\n");
            return 0;
        }
        if (n%2==0)
        {
            printf("Not prime\n");
            return 0;
        }
        for(int i=3;i<=n/2;i+=2)
        {
            if(n%i==0)
            {
                printf("Not prime\n");
                return 0;
            }
        }
        printf("Prime\n");
        return 0;
    }
}
void main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    method1(n);
    method2(n);
    method3(n);
}