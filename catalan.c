#include <stdio.h>
#include <stdint.h>

/* Prove that this program outputs the n-th catalan number. */

size_t f(size_t n, size_t m)
{
    size_t x = 0;
    for (size_t i = 1; i <= n && i <= m; i++)
        x += f(n - 1, i);
    return x ? x : 1;
}

int main()
{
    size_t n;
    scanf("%zu", &n);
    printf("%zu\n", f(n, n));
}