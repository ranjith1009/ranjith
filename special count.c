#include<stdio.h>
#include<string.h>
void main()
{
char s[50],i,c=0;
printf("enter the word:");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='0')&&(s[i]<='9')||(s[i]>='a')&&(s[i]<='z'))
{
continue;
}
else
{
    c++;
}
}
printf("%d",c);
}
