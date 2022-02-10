#include <stdio.h>
void bubblesort(int[], int);
int main()
{
  int a[20], i, n;
  printf("Enter the number of elements:");
  scanf("%d", &n);
  printf("Enter the elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  bubblesort(a, n);
  printf("The sorted elements are:\n");
  for (i = 0; i < n; i++)
    printf("\t%d", a[i]);
  return 0;
}

void bubblesort(int a[], int n)
{
  int pass, temp, j;
  for (pass = 1; pass < n; pass++)
  {
    for (j = 0; j <= n - pass - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
