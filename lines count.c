#include<stdio.h>
void main()
{
char s[50],i,c=0;
printf("enter a word:");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{
c++;
}
}
printf("%d",c+1);
}
