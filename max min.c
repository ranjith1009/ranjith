#include<stdio.h>
void main()
{
    int a[4],i,max=0,min=a[0];
    printf("enter four values");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<4;i++)
    
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    
    }
    printf("%d\t%d",max,min);
}
