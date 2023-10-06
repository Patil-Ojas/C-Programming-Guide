

//odd eve

#include <stdio.h>

int main()
{
    int a;
    int vippass = 69;
    printf("enter no: ");
    scanf("%d", &a);

    if ((a%2 == 0) && (vippass==69))
    {
        printf("no is even");
    }
    else if (a%98==1)
    {
        printf("just miss");
    }
    else
    {
        printf("no is odd");
    }
    return 0;
}