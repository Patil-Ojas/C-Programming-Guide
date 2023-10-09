
#include <stdio.h>

typedef struct complex
{
    int x,y;
} comp;

void display(comp arr[10])
{
    for (int i=1; i<=5; i++)
    printf("%d+%di\n", arr[i].x, arr[i].y);
}

int main()
{
    comp arr[10];

    for (int i=1; i<=5; i++)
    scanf("%d %d", &arr[i].x, &arr[i].y);
    display(arr);

    return 0;    
}