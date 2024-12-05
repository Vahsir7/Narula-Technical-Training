#include<stdio.h>
int main(){

    int n, i;// taking 2 variables
    unsigned long long int fact = 1; // for greater value output , Range from 0 to 18 quintillion or 18 billion billion;
    printf("Enter a integer:");
    scanf("%d", &n);

    // if user put a negative number then error should be thrown
    if (n <= 0){
        printf("Enter a positive value");
    }else{
        for(i=1; i<=n; i++){
            fact*=i;
        }

        printf("The factorial of %d is %llu",n,fact);
    }
    return 0;
}