#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two num=ber");
    scanf("%d%d",&a,&b);
    a=a+b;
    a=a-b;
    b=a-b;
    printf("After swapping:a=%d,b+5d\n",a,b);
    return 0;
}