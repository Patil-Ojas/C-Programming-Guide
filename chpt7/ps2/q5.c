
#include <stdio.h>

void reverse(int n, int arr[], int rev[])
{
    for (int i=0; i<=n; i++)
    {
        rev[i] = arr[n-i-1];
    }
}

int main()
{   
    int n;
    scanf("%d", &n);

    int arr[n], rev[n];

    for (int i=0; i<n; i++)
    scanf("%d", &arr[i]);

    reverse(n, arr, rev);

    for (int i=0; i<n; i++)
    printf("%d ", rev[i]);

    return 0;
}