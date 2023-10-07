
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int table[10];
    for (int i=0; i<10; i++)
    {
        table[i] = n*(i+1);
    }

    for (int i=0; i<10; i++)
    printf("%d ", table[i]);

    return 0;
}