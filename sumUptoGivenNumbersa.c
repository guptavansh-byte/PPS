#include<stdio.h>
int main(){

    int number ;
    printf("enter number till which u want to calculate sum : ");
    scanf("%d" , &number);

    int sum = ( number * (number + 1) ) / 2;
    printf("%d" , sum);

    return 0;

}