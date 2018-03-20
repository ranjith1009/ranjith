#include<stdio.h>
int main()
{
    int i,b=0,avg;
    int a;
    int n[10];
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the n value:");
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=a;i++)
    {
        b=b+n[i];
        avg=(b/a);
    }
    printf("%d",avg);
    
}
