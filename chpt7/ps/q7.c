
#include <stdio.h>

void table(int final[3][10])
{
    for (int i=0; i<=2; i++)
    {
        if (i==0)
        {
            for (int j=0; j<10; j++)
            {
                final[i][j]=2*(j+1);
            }
        }
        if (i==1)
        {
            for (int j=0; j<=9; j++)
            {
                final[i][j]=7*(j+1);
            }
        }
        if (i==2)
        {
            for (int j=0; j<=9; j++)
            {
                final[i][j]=9*(j+1);
            }
        }
    }
}

int main()
{
    int final[3][10];
    table(final);

    for (int i=0; i<=2; i++)
    {
        for (int j=0; j<=9; j++)
        {
            printf("%d ", final[i][j]);
        }
        printf("\n");
    }
    return 0;
}