#include<stdio.h>
int main()
{
    int n,highest_mark,i;
    int arr[100];
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
highest_mark=arr[0];
for( i=0;i<n;i++)
{
        if(arr[i]>=highest_mark)
        {
            highest_mark=arr[i];
        }
}
for( i=0;i<n;i++)
{
    arr[i]=highest_mark-arr[i];
    printf("%d ",arr[i]);
}
return 0;
}
