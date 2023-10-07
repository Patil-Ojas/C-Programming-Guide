
#include <stdio.h>

/*
//using for loop
int main()
{
    int n, fact=1;
    printf("enter no: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--)
    {
        fact = fact*i;
    }
    printf("%d", fact);
    return 0;
}
*/

//using while loop
int main()
{
    int n, fact=1;
    printf("enrter no: ");
    scanf("%d", &n);

    while (n>0)
    {
        fact = fact*n;
        n--;
    }
    printf("%d", fact);
    return 0;
}