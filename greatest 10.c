#include<stdio.h>
void main()
{
    int a[10],i,max=a[0];
    printf("enter ten values");
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    
    }
    printf("%d",max);
}
