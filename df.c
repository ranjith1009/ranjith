#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a base values:");
    scanf("%d",&a);
    printf("enter the b power values:");
    scanf("%d",&b);
    while(b!0)
    c=c*a;
    --b;
    printf("%d",c);
}
