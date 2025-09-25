#include <stdio.h>
    int main()
    {
      int length , breadth;
      printf("Enter length of a rectangle : ");
      scanf("%d" , &length);
      printf("Enter breadth of a reactangle :");
      scanf("%d", &breadth);
      float perimeter = 2*(length+breadth);
      printf("%2f" , perimeter);
      return 0;
    }