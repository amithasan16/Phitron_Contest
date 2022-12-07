#include<stdio.h>
int main()
{
    int n,sum=0,total=0,missing_number=0;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    n=n+1;
    total=(n*(n+1)/2);
    missing_number=total-sum;
    printf("%d\n",missing_number);

}