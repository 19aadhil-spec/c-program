#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter a given number is odd or even");
    scanf("%d%d",&a,&b);
    if((a+b)%2==0)
    printf("%d is even",a+b);
    else
    printf("%d is odd",b+a);
    return 0;
}