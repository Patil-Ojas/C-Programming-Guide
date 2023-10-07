
#include <stdio.h>

int main()
{
    int num, marks;
    scanf("%d %d", &num, &marks);

    int arr[num][marks];
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<marks; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<marks; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}