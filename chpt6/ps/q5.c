
#include <stdio.h>

int main()
{
    int i=3;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    printf("%d", **ptr2);
    return 0;

}