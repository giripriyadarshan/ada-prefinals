#include <stdio.h>
#include <time.h>
int fibo(int);
int fibo(int n)
{
  if ((n == 0) || (n == 1))
    return (0);
  else if (n == 2)
    return (1);
  else
    return (fibo(n - 1) + fibo(n - 2));
}
void main()
{
  int n, i = 0;
  clock_t st, end, total_t;
  st = clock();
  printf("Enter the number of terms: \n");
  scanf("%d", &n);
  while (i < n)
  {
    ++i;
    printf("%d\t", fibo(i));
  }
  printf("\n %dth element of the series is: %d\n", i, fibo(i));
  end = clock();
  total_t = (end - st) / CLOCKS_PER_SEC;
  printf("Time taken to generate series is: %ld\n", total_t);
}
