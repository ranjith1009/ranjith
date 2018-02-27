#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping %d\t%d",a,b);
}
