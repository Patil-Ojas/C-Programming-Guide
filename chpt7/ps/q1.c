
#include <stdio.h>
/*
//strange
int main()
{
    int arr[4]={ 1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    ptr = ptr+2;
    printf("via ptr: %d\n", ptr);
    printf("via arr: %d", arr[2]);

    return 0;
}
*/

int main()
{
    int arr[10];
    int *ptr = arr;

    ptr = ptr+2;
    if (ptr==arr[2])
    printf("ye");
    else
    printf("nay");
    return 0;
}