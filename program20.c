#include <stdio.h>
#include <time.h>
int gcd(int, int);

int main()
{
  int n, m;
  clock_t st, end, total_t;
  st = clock();
  printf("Enter the values to calculate GCD of: ");
  scanf("%d %d", &m, &n);
  printf("GCD(%d %d) = %d\n", m, n, gcd(m, n));
  end = clock();
  total_t = (end - st) / CLOCKS_PER_SEC;
  printf("Time taken to calculate GCD: %ld\n", total_t);
  return 0;
}

int gcd(int m, int n)
{
  if (n == 0)
    return (m);
  else if (n > m)
    return (gcd(n, m));
  else
    return (gcd(n, m % n));
}
