#include<stdio.h>
int main()
{
int i,j,sum=0;
printf("For how many natural numbers do you want to find the sum?");
scanf("%d",&j);
for(i=1;i<=j;i++)
 {
 sum+=i;
 }
printf("The sum of first %d natural numbers is %d",j,sum);
}

