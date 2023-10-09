
#include <stdio.h>

typedef struct dates
{
    int d,m,y;
} date;

void compare(date d1, date d2)
{
    if (d1.y>d2.y)
    printf("First date is greater");

    else if (d1.y<d2.y)
    printf("Second date is greater");

    else
    {
        if (d1.m>d2.m)
        printf("First date is greater");

        else if (d1.m<d2.m)
        printf("second date is greater");

        else
        {
            if (d1.d>d2.d)
            printf("First date is greater");

            else if (d1.d<d2.d)
            printf("Second date is greater");

            else
            printf("They are the same dates");
        }
    }
}

int main()
{
    date d1, d2;
    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);
    scanf("%d %d %d", &d2.d, &d2.m, &d2.y);

    compare(d1, d2);

    return 0;
}