#include <stdio.h>
#include <math.h>
    int main()
    {
      float a , b , c ;
      printf("Enter three numbers: ");
      scanf("%f %f %f" , &a , &b , &c);
      int discriminant = (b*b - 4*a*c);
      if(discriminant>0)
      {
      float root1 = (-b+sqrt(b*b - 4*a*c)) / (2*a);
      float root2 = (-b-sqrt(b*b - 4*a*c)) / (2*a);
      printf("%f %f" , root1 ,root2);
      }
      else
      {
        printf("imaginary roots");
      }
      return 0;
    }