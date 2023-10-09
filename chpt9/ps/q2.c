
#include <stdio.h>
#include <string.h>

typedef struct Vector
{
    int x,y;
} vect;

// void sumvector(vect a1, vect a2)
// {
//     vect sum;
//     sum.x = a1.x+a2.x;
//     sum.y = a1.y+a2.y;

//     printf("%di+%dj", sum.x, sum.y); 
// }
vect sumvector(vect a1, vect a2)
{
    vect sum;
    sum.x = a1.x+a2.x;
    sum.y = a1.y+a2.y;
    return sum;
}

int main()
{
    vect a1,a2;
    scanf("%d %d", &a1.x, &a1.y);
    scanf("%d %d", &a2.x, &a2.y);

    vect sum = sumvector(a1, a2);
    printf("%d %d", sum.x, sum.y);
    return 0;
}