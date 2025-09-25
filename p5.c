#include <stdio.h>
    int main()
    {
      int n;
      printf("Enter a natural number: ");
      scanf("%d" , &n);
      float sum = (n*(n+1))/2;
      printf("%2f" , sum);
      return 0;
    }
