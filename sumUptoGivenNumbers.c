#include<stdio.h>
int main(){

    int i , number ;
    int sum = 0;

    printf ("Enter number till which u want to calculate sum : ");
    scanf("%d" , &number);

    for ( i=1 ; i<=number ; i++) 
    {
        sum = sum + i ;
    }
    
    printf ("%d" , sum);

    return 0;

}