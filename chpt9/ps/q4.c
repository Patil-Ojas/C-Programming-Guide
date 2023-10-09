
#include <stdio.h>
#include <string.h>

typedef struct reee
{
    int x;
    char mander[50];
} re;

int main()
{ 
    re r1,r2;
    re *ptr;

    ptr = &r1;
    ptr->x = 15;
    strcpy((*ptr).mander, "bruh huh");

    printf("%d\n %s", r1.x, r1.mander);
    return 0;
}