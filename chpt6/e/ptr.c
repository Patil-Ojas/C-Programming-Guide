
#include <stdio.h>

// int main()
// {
//     int *j;
//     int i=2;
//     j = &i;
//     printf("%d\n", j);
//     printf("%u\n", j);
//     printf("%d\n", i);
//     printf("%u\n", &i);
//     printf("%d\n", &i);
//     return 0;
// }


int main()
{
    int *ptr1;
    char *ptr2;
    float *ptr3;
    int d = 5;
    char e = 'j';
    float f=3.14;
    ptr1 = &d;
    ptr2 = &e;
    ptr3 = &f;

    printf("%d\n", ptr1);
    printf("%d\n", d);
    printf("%d\n", ptr2);
    printf("%c\n", e);
    printf("%d\n", ptr3);
    printf("%f\n", f);
    return 0;
}
