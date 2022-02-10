#include <stdio.h>
#include <time.h>
int main()
{
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  clock_t start, end, total;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  start = clock();
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  end = clock();
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("%d   ", sum[i][j]);
      if (j == c - 1)
      {
        printf("\n\n");
      }
    }
  total = (end - start) / CLOCKS_PER_SEC;
  printf("Time taken to add two matrices are: %ld", total);
  return 0;
}
