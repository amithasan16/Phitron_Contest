#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int arr,sum1=0,sum2=0,l=0,u=0;
    fgets(arr,sizeof(arr),stdin);
     for(int i=0;arr[i]<'\0';i++)
    {
        if(arr>='a' && arr<='z')
   
{
    l++;
}
else if(arr>='A' && arr<='Z')
{
u++;
}
    }
printf("%d\n",l);
printf("%d\n",u);
}