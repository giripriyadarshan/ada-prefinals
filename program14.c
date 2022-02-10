#include <stdio.h>
int Rsum(int a[], int n);
int main()
{
  int n, i, sum = 0, a[20];
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d numbers\n", n);
  for (i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  sum = Rsum(a, n);
  printf("The sum of array elements using recursion = %d", sum);
  return 0;
}
int Rsum(int a[20], int n)
{
  if (n == 0)
    return (0);
  else
    return (a[n] + Rsum(a, n - 1));
}
