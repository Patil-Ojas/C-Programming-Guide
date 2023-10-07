
#include <stdio.h>

int main()
{
    int a[6] = {1,2,7,4,5,6};

    printf("thirs element is %d\n", a[2]);

    int *ptr = &a[0];
    printf("pointer points to %d", *(ptr+2));
    return 0;
}