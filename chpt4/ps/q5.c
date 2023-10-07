
#include <stdio.h>
/*
//while loop
int main()
{
    int n,i=1, sum=0;
    printf("enter no: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d", sum);
    return 0;
}
*/


/*
//for loop
int main()
{
    int n, sum=0;
    printf("enter no: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d", sum);
    return 0;
}
*/


//do while loop
int main()
{
    int n, sum=0;
    int i=0;

    printf("enter no: ");
    scanf("%d", &n);
    do
    {
        sum = sum+i;
        i++;
    }
    while(i<=n);
    printf("%d", sum);
    return 0;
}