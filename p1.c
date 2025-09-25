#include <stdio.h>
    int main()
    {
      int rad;
      printf("Enter radius of a circle : ");
      scanf("%d" , &rad);
      float area = 3.14*rad*rad;
      printf("%2f" , area);
      return 0;
    }
