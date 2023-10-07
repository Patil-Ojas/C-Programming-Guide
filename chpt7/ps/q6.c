
#include <stdio.h>

int pos(int n, int arr[n], int posno[n], int count)
{   
    count = 0;   
    for (int i=0; i<=n; i++)
    {
        if (arr[i]>=1)
        {
        posno[i] = arr[i];
        count =count +1;
        printf("%d ", posno[i]);
        }
    }
    printf("\nNumber of pos no are %d", count);
    return 0;
}

int main()
{
    int n, count;
    scanf("%d", &n);

    int arr[n], posno[n];

    for (int i=0; i<=n; i++)
    scanf("%d", &arr[i]);

    pos(n, arr, posno, count);
/*
    for (int i=0; i<=n; i++)
    printf("%d ", arr[i]);
*/    
    return 0;
}