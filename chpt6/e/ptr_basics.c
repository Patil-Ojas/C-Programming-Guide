
#include <stdio.h>

// int main()
// {
//     int i = 24;
//     int *j = &i;

//     printf("value of i is %d \n", i);
//     printf("value of i is %d \n", *j);
//     printf("address of i is %d \n", &i);
//     printf("address of i is %d \n", j);
//     printf("address of j is %d \n", &j);
//     printf("value of j is %d \n", *(&j));
// }

void wrong_swap(int x, int y)
{
    int temp = y;
    y = x;
    x = temp;
}
void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

int main()
{
    int x=3,y=4;
    printf("b4 fn %d %d\n", x, y);

    wrong_swap(x, y);
    printf("wrong swap %d %d\n", x, y); //wrong cuz its call by value

    swap(&x, &y);
    printf("swapped %d %d\n", x, y);
    return 0;
}