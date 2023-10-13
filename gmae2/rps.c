
#include <stdio.h>

void win()
{
    printf("Player 1 Won!");
}
void lose()
{
    printf("Player 2 Won!");
}
void draw()
{
    printf("It's a Draw!");
}

int main()
{
    char i1, i2;
    printf("Player 1 enter: ");
    scanf("%c", &i1);
    fflush(stdin);
    printf("Player 2 enter: ");
    scanf("%c", &i2);

    if (i1=='r')
    {
        if (i2=='r')
        draw();

        if(i2=='s')
        win();

        if(i2=='p')
        lose();
    }

    if (i1=='p')
    {
        if (i2=='p')
        draw();

        if(i2=='s')
        win();

        if(i2=='r')
        lose();
    }

    if (i1=='s')
    {
        if (i2=='s')
        draw();

        if(i2=='p')
        win();

        if(i2=='r')
        lose();
    }

    return 0;
}