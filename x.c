
#include<stdio.h>
void main()
{
    int a,i,b,n;
    printf("entre the a,nvalue:");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        b=a*i;
        printf("%d",b);
    }
}
