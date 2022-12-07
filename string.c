#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];

    scanf("%s",arr);

    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c ",arr[i]);// %c howar karon holo ami majhe gaph diye name print korsi.
        i++;
    }
}