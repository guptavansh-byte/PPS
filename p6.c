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
      if( ((a*a) + (b*b))==(c*c) ||((a*a) + (c*c))==(b*b) || ((c*c) + (b*b)==(a*a)) )
      {
        printf(" a right angle triangle");
      }
      else{
        printf("not a right angle triangle");
      }
    }