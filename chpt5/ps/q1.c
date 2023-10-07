
#include <stdio.h>

int averager(int n1, int n2, int n3)
{
    return (n1+n2+n3)/3;
}

int main()
{
    int n1, n2, n3, avg;
    scanf("%d %d %d", &n1, &n2, &n3);

    avg = averager(n1, n2, n3);
    printf("%d", avg);
    return 0;
}