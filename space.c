#include<stdio.h>
void main()
{
char a[50],i,c=0;
printf("enter the word:");
gets(a);
for(i=0;a[i]!='\0';i++)
if(a[i]==' ')
{
c++;
}
printf("%d",c);
}
