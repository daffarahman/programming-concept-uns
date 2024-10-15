#include <stdio.h>

int gcd(int a, int b)
{
    int max = (a > b) ? a : b;
    int res = 1;
    for (int i = 1; i <= max; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;
}
