
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // printf("Size of integer is %d in my lappy.\n", sizeof(int));
    // printf("Size of float is %d in my lappy.\n", sizeof(float));
    // printf("Size of char is %d in my lappy.\n", sizeof(char));

    ptr = (int *)malloc(6*sizeof(int));

    for (int i=0; i<6; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i=0; i<6; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}