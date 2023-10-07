#include <stdio.h>

int tablemaker3000(int n1, int n2, int n3, int table[3][10])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<10; j++)
        {
            if (i==0)
            {
                table[i][j]=n1*(j+1);
            }
            if (i==1)
            {
                table[i][j]=n2*(j+1);
            }
            if (i==2)
            {
                table[i][j]=n3*(j+1);
            }
        }
    }
    return 0;
}

int main()
{
    int table[3][10];
    int n1, n2, n3;

    printf("enter the number whose table u need: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    tablemaker3000(n1, n2, n3, table);

    for (int j=0; j<10; j++)
    {
        for (int i=0; i<3; i++)
        printf("%d ", table[i][j]);

        printf("\n");
    }
    return 0;
}