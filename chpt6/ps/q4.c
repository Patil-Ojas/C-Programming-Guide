
#include <stdio.h>

int doit(int *n1, int *n2, int *sum, int *avg)
{
    *avg = (*n1+*n2)/2;
    *sum = *n1+*n2;

    return 0;
}


int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int sum, avg;

    doit(&n1, &n2, &sum, &avg);

    printf("sum is %d\n", sum);
    printf("avg is %d\n", avg);

    return 0;
}