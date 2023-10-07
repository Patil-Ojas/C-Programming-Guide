
#include <stdio.h>

int patterner(int q)
{
    for (int i=1; i<=2*q-1; i++)
    {   
        if (i%2==1)
        printf("*");
        else
        continue;
    }
    printf("\n"); 
    return 0;
}

int main()
{
    int q;
    scanf("%d", &q);

    patterner(q);
    return 0;
}