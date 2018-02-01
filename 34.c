#include<stdio.h>
void main()
{
	int num1,num2,a,b,sum=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(a=1;a<=num1;a++)
	{
		printf("%d",a);
	}
	for(b=1;b<=num2;b++)
	{
		while(num2>num1)
		sum+=b;
	}
printf("%d",sum);
}
