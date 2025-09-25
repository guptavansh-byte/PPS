#include <stdio.h>

#include<math.h>
    int main()
    {
      int a , b , c ;
      printf("Enter side a : ");
      scanf("%d" , &a);
      printf("Enter side b :");
      scanf("%d", &b);
      printf("Enter side c :");
      scanf("%d", &c);
      float s = (a+b+c)/2.0 ;
      printf("Semi-perimeter = %.2f\n", s);
      float area= sqrt(s*(s-a)*(s-b)*(s-c)); 
      printf("Area of tTriangle :%f" , area);
      return 0;
    }