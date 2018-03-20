#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,n;
    printf("enter the name:");
    gets(a);
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",a);
    }
    
}
