
#include <stdio.h>

int fibbo(int n, int k)
{   
    int a=0, b=1,c;
    //printf("0\n1\n");

    for (int i=0; i<=n; i++)
    {
        int c=0;
        c = a+b;
        //for n element or fuk it
        
        if(k==i)
        {
            printf("%d", c);
            break;
        }
        //for series
        //printf("%d\n", c);
        a = b;
        b = c;
    }
    return 0;
}

int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    printf("\n");
    fibbo(n, k);
    return 0;
}