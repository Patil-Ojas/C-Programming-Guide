

#include <stdio.h>

int main()
{
    int bruh[2][2][2];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int k=0; k<3; k++)
            {
                printf("%d\n", &bruh[i][j][k]);
            }
        }
    }
    return 0;
}