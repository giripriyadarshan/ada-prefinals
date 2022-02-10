#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[15], c[15];
void merge(int low, int mid, int high)
{
  int i, j, k;
  i = low;
  j = mid + 1;
  k = low;
  while (i <= mid && j <= high)
  {
    if (a[i] < a[j])
    {
      c[k] = a[i];
      k++;
      i++;
    }
    else
    {
      c[k] = a[j];
      k++;
      j++;
    }
  }
  while (i <= mid)
  {
    c[k] = a[i];
    k++;
    i++;
  }
  while (j <= high)
  {
    c[k] = a[j];
    k++;
    j++;
  }
  for (i = 0; i <= k - 1; i++)
    a[i] = c[i];
}
void mergesort(int low, int high)
{
  int mid;
  if (low < high)
  {
    mid = (low + high) / 2;
    mergesort(low, mid);
    mergesort(mid + 1, high);
    merge(low, mid, high);
  }
}
int main()
{
  int i, n;
  clock_t st, end, total_t;
  st = clock();
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  mergesort(0, n - 1);
  printf("The sorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
  end = clock();
  total_t = (end - st) / CLOCKS_PER_SEC;
  printf("Time taken to sort: %ld\n", total_t);
  return 0;
}
