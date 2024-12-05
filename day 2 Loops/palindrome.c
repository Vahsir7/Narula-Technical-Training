#include <stdio.h>
void main(){
    int n, reverse = 0, remainder, original;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    original= n;

    while(n!=0){
        remainder= n%10;
        reverse= reverse*10+remainder;
        n/=10;
    }

    if(reverse == original){
        printf("The number is palindrome");
    }else{
        printf("The number is not palindrome");
    }
}