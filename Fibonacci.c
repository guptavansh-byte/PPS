#include <stdio.h>

int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);

    int a = 1 , b = 1;
    int sum = 1;

    printf("Fibonacci series 1th term is 1\n");
    printf("Fibonacci series 2th term is 1\n");

    for (int i = 1; i<=n-2 ; i++){
        sum = a + b;
        a = b;
        b = sum; 
        printf("Fibonacci series %dth term is %d\n",i+2,sum);   
    }
    
    return 0;
}