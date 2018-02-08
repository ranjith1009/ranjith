#include <stdio.h>
#include<conio.h>
int main()
{
	int n,r,a,sum=0;
	scanf("%d",&n);
	a=n;
  while(a!=0)
{
	r=a%10;
	sum=sum*10+(r);
	a=a/10;
}
  if(n==sum)
{
	printf("Yes,The Number is Palindrome");
}
else
{
