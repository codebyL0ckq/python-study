#include <stdio.h>

int main()
{
    int n, t;
    int i, j, k;
    long long int Fib[61];
    scanf("%d", &t);
    Fib[0] = 0;
    Fib[1] = 1;
    for (j = 2; j < 61; j++)
    {
        Fib[j] = Fib[j - 1] + Fib[j - 2];
    }
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, Fib[n]);
    }
    return 0;
}