#include<stdio.h>
int main(){
    int n,lastdigit,remainingdigits;
    printf("Enter a number:");
    scanf("%d",&n);
    lastdigit=n%10;
    remainingdigits=n/10;
    printf("Last digit:%d\n",lastdigit);
    printf("All digits execpt last digit:%d\n",remainingdigits);
    return 0;
}