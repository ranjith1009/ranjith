#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("enter the n value"):
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    
}
