// A spy number is, when the sum of digits and the product of digits are equal 
// Test case : 123 (It's a spy number)

#include<stdio.h>
int main(){

    int num, sum=0, product=1, d;
    
    printf("Enter a positive integer:");
    scanf("%d", &num);
    while (num>0)
    {
        d= num%10;
        sum= sum+d;
        product= product*d;
        num= num/10;
    }

    printf("The sum of the digits is %d and the product of the digits is %d\n", sum, product);
    
    (sum == product) ? printf("The number is a spy number"):printf("The number is not a spy number");

    return 0;
}