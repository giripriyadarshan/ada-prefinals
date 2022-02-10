#include <stdio.h>
int unique(int a[], int n);
int main()
{
  int j, i, n, a[20];
  printf("Enter the number of elements:\n");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  if (unique(a, n))
    printf("Array contains only unique numbers.\n");
  else
    printf("Array contains duplicate numbers.\n");
  return 0;
}
int unique(int a[10], int n)
{
  int i, j;
  for (i = 1; i <= n - 1; i++)
  {
    for (j = i + 1; j <= n; j++)
    {
      if (a[i] == a[j])
        return (0);
    }
  }
  return (1);
}
