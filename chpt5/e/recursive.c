
#include <stdio.h>

int factorial(int n)
{
    if (n==1 || n==0)
    {
        return 1;
    }
    else
    {
        int fact = n*factorial(n-1);
        return fact;
    }
}
int main()
{
    int n, fact;
    scanf("%d", &n);

    fact = factorial(n);
    printf("%d", fact);
    return 0;
}