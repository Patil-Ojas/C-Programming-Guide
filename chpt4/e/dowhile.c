#include <stdio.h>
/*
int main()
{
    int a=0;

    do
    {
        printf("%d \n", a);
        a++;
    } 
    while (a<=10);
    return 0;
}
*/

int main()
{
    int i=1,n;
    printf("enter no: ");
    scanf("%d", &n);

    do
    {
        printf("%d \n", i);
        i++;
    }

    while(n>0 && i<=n);
    return 0;
}
