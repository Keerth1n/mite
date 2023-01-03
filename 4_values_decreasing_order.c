//***4 VALUES IN DECREASING ORDER***
#include <stdio.h>
void main()
{
    int a[4],i,j,t;
    printf("Enter 4 values ");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=3;i>=0;i--)
        printf("%d\t",a[i]);
}