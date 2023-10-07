
#include <stdio.h>

int main()
{
    int n, sum=0;

    printf("enter no: ");
    scanf("%d", &n);

    for (int i=0; i<=10; i++)
    {
        sum = sum+n*i;
    }
    printf("%d", sum);
    return 0;
}