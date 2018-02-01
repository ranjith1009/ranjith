#include<stdio.h>
void main()
{
    int a,i,sum=o;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%2==0)
        {
            sum=1;
            break;
        }
    }
    if(sum==0)
    printf("the number is prime");
    else
    print("the number is not prime");
}

