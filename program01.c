/* Program1: Implement recursive binary search and linear search and determine the time required to search an element. Record the time taken for the best case and worst case.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rbinary_search(int[], int, int, int);
int rlsearch(int n, int list[], int key);
int main()
{
  int ch, list[30], key, i, n, flag, a[100], pos = 0;
  clock_t st, end, total_t;
  printf("1. Linear search\n");
  printf("2. Binary search\n");
  printf("3. Exit\n");
  printf("Enter your choice\n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    st = clock();
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
      scanf("%d", &list[i]);
    printf("Enter the element to be searched:\n");
    scanf("%d", &key);
    flag = rlsearch(n, list, key);
    if (flag == -1)
      printf("Element doesn't exist in the given array.\n");
    else
      printf("Search succesful, element found at position: %d\n", flag + 1);
    end = clock();
    total_t = (end - st) / CLOCKS_PER_SEC;
    printf("Time taken to search: %ld\n", total_t);
    break;
  case 2:
    st = clock();
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
    printf("\nEnter the element to be searched:");
    scanf("%d", &key);
    pos = rbinary_search(a, key, 0, n - 1);
    if (pos == -1)
      printf("Element doesn't exist in the given array.\n");
    else
      printf("Search succesful, element found at position: %d\n", pos);
    end = clock();
    total_t = (end - st) / CLOCKS_PER_SEC;
    printf("Time taken to search: %ld\n", total_t);
    break;
  case 3:
    exit(0);
    break;
  default:
    printf("Please read carefully");
  }
  return 0;
}
int rbinary_search(int a[], int key, int low, int high)
{
  int mid;
  if (low <= high)
  {
    mid = (low + high) / 2;
    if (key == a[mid])
      return (mid + 1);
    if (key < a[mid])
      return (rbinary_search(a, key, low, mid - 1));
    else
      return (rbinary_search(a, key, mid + 1, high));
  }
  return 0;
}
int rlsearch(int n, int list[20], int key)
{
  if (n < 0)
    return -1;
  if (list[n - 1] == key)
    return n - 1;
  return rlsearch(n - 1, list, key);
}