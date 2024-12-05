#include<stdio.h>
int main(){

    int n,t,remainder,p,s=0,i;
    printf("Enter a 3-digit positive integer:");
    scanf("%d", &n);
    t=n;
    while(t != 0){
        remainder = t % 10;
        p = 1;
        for(i = 1; i <= remainder; i++){
            p = p*i;
        }
            s = s+p;
            t /= 10;
        
    }
        if(s == n){
            printf("Krishnamurthy");
        }else{
            printf("NO");
        }
    

    return 0;
}