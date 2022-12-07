#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    gets(arr);
    if(arr[0]>=97 && arr[0]<=122)
    arr[0]=arr[0]-32;
    puts(arr);
}