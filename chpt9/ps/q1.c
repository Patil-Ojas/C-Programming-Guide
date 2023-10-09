
#include <stdio.h>

typedef struct vector
{
    int x,y;
} vect;

int main()
{
    vect v;
    v.x = 5;
    v.y = 9;

    printf("%di+%dj", v.x, v.y);
}