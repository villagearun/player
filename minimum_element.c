#include<stdio.h>

void main() 
{
    int a[10],n,i,min=0;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
min=a[0];
for(i=0;i<n;i++)
{
    if(min>a[i])
    {
    min=a[i];
    }
}
printf("%d",min);
}
