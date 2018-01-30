#include<stdio.h>
void main()
{
int a,c;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
a=a/10;
c=c+1;
}
printf("there are %d numbers",c);
}
