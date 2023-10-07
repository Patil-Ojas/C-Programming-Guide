
#include <stdio.h>

int main()
{
    int arr[50];
    int n;
    scanf("%d", &n);
    for (int i=0; i<11; i++)
    {
        arr[i]=n*i;
    }
    for (int i=1; i<11; i++)
    {
        printf("%d x %d = %d\n", n, i, arr[i]);
    }
    return 0;
}