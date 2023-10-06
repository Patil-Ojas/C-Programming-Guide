
//conditional operators

#include <stdio.h>

int main()
{
    int p;
    printf("enter no: \n");
    scanf("%d", &p);

    (p < 5) ? printf("no is greater than 5 yes def") : printf("no is smaller than 5 yes def");
    return 0;
}