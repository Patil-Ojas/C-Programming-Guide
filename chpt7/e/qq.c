// take inpput from user store in var and perform ops on them

#include <stdio.h>

int main()
{
    int i = 15;
    int *ptr = &i;

    int i1 = 17;
    int *ptr1 = &i1;

    int i0 = 16;
    int *ptr0 = &i0; 
    printf("value is %u\n", ptr);

    ptr = ptr+1;
    printf("add is %u\n", ptr);

    ptr = ptr - 1;
    printf("sub is %u %u %u\n", ptr, ptr0, ptr1);

    //ptr = ptr1-ptr;
    //printf("ptr1-ptr = ", ptr);

    if (ptr>=ptr1)
    {
        printf("great");
    }
    else
    {
        printf("oof");
    }
    return 0;
}