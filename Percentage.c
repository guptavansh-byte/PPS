#include <stdio.h> 

//ENTER MARKS OF 5 SUBJECTS FROM USER AND PRINT THEIR SUM AND PERCENTAGE.

int main(){

    int MarksForSubject1 , MarksForSubject2 , MarksForSubject3 , MarksForSubject4 , MarksForSubject5 ;
    int sum;
    float percentage;

    printf("Enter the marks for sub 1 :");
    scanf("%d" , &MarksForSubject1);

    printf("Enter the marks for sub 2 :");
    scanf("%d" , &MarksForSubject2);

    printf("Enter the marks for sub 3 :");
    scanf("%d" , &MarksForSubject3);

    printf("Enter the marks for sub 4 :");
    scanf("%d" , &MarksForSubject4);
    
    printf("Enter the marks for sub 5 :");
    scanf("%d" , &MarksForSubject5);

    sum= MarksForSubject1 + MarksForSubject2 + MarksForSubject3 + MarksForSubject4 + MarksForSubject5 ;
    percentage = (sum/500)*100;

    printf("sum of the marks : %d \n" , sum);
    printf("percentage is : %.2f\n ", percentage);

    return 0;
}