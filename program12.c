#include <stdio.h>
int min(int[], int, int);
int main()
{
  int i, a[10], k, n, loc = 0, temp;
  printf("Enter the number of elements:\n");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (k = 0; k < n; k++)
  {
    loc = min(a, k, n);
    temp = a[k];
    a[k] = a[loc];
    a[loc] = temp;
  }
  printf("Elements after Selection Sort:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
  return 0;
}

int min(int a[10], int k, int n)
{
  int loc, j, min;
  min = a[k];
  loc = k;
  for (j = k + 1; j <= n - 1; j++)
  {
    if (min > a[j])
    {
      min = a[j];
      loc = j;
    }
  }
  return loc;
}
