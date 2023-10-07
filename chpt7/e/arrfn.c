
#include <stdio.h>
/*
void printarr(int *ptr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d element is arr is %d\n", i+1, *(ptr+i));
    }
}
*/

//alternate method

void printarr(int ptr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d element is arr is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 99;
}
int main()
{
    int arr[] = {1,5,9,7,5,3};
    printarr(arr,6);
    printf("%d", arr[2]);
    return 0;
}