#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the a value:");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        c=a%10;
        b=b+c;
        a=a/10;
    }
    if(a==d)
    printf("the number is amstrong number");
    else
    printf("the number is not amstrong");
}
