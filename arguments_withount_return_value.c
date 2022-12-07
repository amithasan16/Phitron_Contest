#include<stdio.h>
void sum();
float main()
{
    sum();
}
void sum()
{
    float x,y;
    scanf("%f %f",&x,&y);
    float s;
    s=x+y;
    printf("Sum=%f\n",s);
}