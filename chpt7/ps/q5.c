//reverse an array

#include <stdio.h>

int rev(int n, int arr[n],int copy[n])
{
    for (int i=0; i<=n; i++)
    {
        copy[i] = arr[n-i];
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], copy[n];

    for (int i=0; i<=n; i++)
    scanf("%d", &arr[i]);

    rev(n, arr, copy);
/*
    for (int i=0; i<=n; i++)
    printf("%d ", arr[i]);

    printf("\n");
*/
    for (int i=0; i<=n; i++)
    printf("%d ", copy[i]);
    
    return 0;
}