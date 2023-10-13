
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *ptr;
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i=0; i<n; i++)
    scanf("%d", &ptr[i]);

    for (int i=0; i<n; i++)
    printf("%d\n", ptr[i]);
    
    printf("\n");
    
    scanf("%d", &m);
    realloc(ptr, m);

    printf("\n");

    for (int i=0; i<m; i++)
    scanf("%d", &ptr[i]);

    for (int i=0; i<m; i++)
    printf("%d\n", ptr[i]);

    return 0;
}