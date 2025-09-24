#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char str [n];
    scanf("%[^\n]",str);
    int len =strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            printf("Not Palindrome");
            return 0;
        }
    }
    
    printf("Palindrome");
    return 0;
}