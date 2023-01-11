#include <stdio.h>
int main()
 {
   int rows, N = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            N= 1;
         else
            N = N * (i - j + 1) / j;
         printf("%4d", N);
      }
      printf("\n");
   }
   return 0;
}
