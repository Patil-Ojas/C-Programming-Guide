
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;

    ptr = (int *)malloc(600*sizeof(int));
    
    for (int i=0; i<600; i++)
    {    
        ptr2 = (int *)malloc(600*sizeof(int));
        scanf("%d", &ptr[i]);
        free(ptr2);            //helps in clearing ram, if not used memory usage keeps on increasing, if used memory remains const
    }
    return 0;
}