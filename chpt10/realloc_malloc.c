//scuffed but works

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    //first size of array
    int n;
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));

    //take in arr of size n 
    for (int i=0; i<n; i++)
    scanf("%d", &ptr[i]);

    //printf arr of size n
    for (int i=0; i<n; i++)
    printf("%d\n", ptr[i]);

    //second size of array
    int m;
    scanf("%d", &m);

    //reallocate
    realloc(ptr, m*sizeof(int));
    
    printf("\n");
    
    //take in arr of size m
    for (int i=0; i<m; i++)
    scanf("%d", &ptr[i]);

    //pprint arr of size m
    for (int i=0; i<m; i++)
    printf("%d\n", ptr[i]);

    return 0;
}