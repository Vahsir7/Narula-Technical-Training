#include<stdio.h>
 int main(){

    int i,n; // taking 2 variables

    //initialize first 2 digits 
    int t1=0, t2=1;

    //initialize the 3rd term (That is sum of t1 & t2)
    int nextTerm = t1 + t2;

    //taking input
    printf("Put the nth term of the series:");
    scanf("%d", &n);

    //printing the first 2 terms
    printf("Fibonacci series: %d,%d",t1,t2);

    //print 3rd to nth terms
    for ( i = 3; i <= n; ++i)
    {
        printf(",%d",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    

    return 0;
 }