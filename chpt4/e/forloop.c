#include <stdio.h>
/*
int main()
{   
    for ( int a=0; a<=10; a++)
    {
        printf("e: %d \n", a);
    }
    return 0;
}
*/

int main()
{
    int n;
    printf("enter no: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--)
    {
        printf("%d \n", i);
    }
    return 0;
}