
#include <stdio.h>
/*
int main()
{
    int n, prime=0;
    
    printf("enter no: ");
    scanf("%d", &n);

    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            prime=1;
            break;
        }
    }
    if (prime==1)
    {
        printf("no is composite");
    }
    else
    {
        printf("no is prime");
    }
    return 0;
}
*/

int main()
{
    int n, prime=0;
    
    printf("enter no: ");
    scanf("%d", &n);

    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            prime=1;
            printf("no is composite");
            break;
        }
    }
    if (prime==0)
    {
        printf("no is prime");
    }    
    return 0;
}