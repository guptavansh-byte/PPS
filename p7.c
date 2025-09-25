#include <stdio.h>
    int main()
    {
      int rad;
      printf("Enter radius of a circle : ");
      scanf("%d" , &rad);
      float Volume = (4*3.14*rad*rad*rad)/3;
      printf("%.2f" , Volume);
      return 0;
    }
