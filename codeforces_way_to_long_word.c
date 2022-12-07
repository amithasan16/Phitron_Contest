#include<stdio.h>
#include<string.h>
int main()
{
     int n;
    scanf("%d",&n);
    char arr[n][102];
    for(int i=0; i<n;i++)
{
    scanf("%s",&arr[i]);
        int l=strlen(arr[i]);
if(l>10)

    printf("%c%d%c\n",arr[i][0],(l-2),arr[i][l-1]);
else
    printf("%s\n",arr[i]);

}

}
