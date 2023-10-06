
#include <stdio.h>

/*
//this deals with methods to print ouput

int main()
{   
    int a = 5;
    float b = 6.22;
    char c = 's';

    printf("a is %d   \n", a);
    printf("b is %f   \n", b);
    printf("b is %.1f \n", b);
    printf("c is %c   \n", c);

    return 0;
}

*/

//taking input from user
//scanf with char is sus otherwise all cool
int main()
{
    int a,b;
    char w[20];

    printf("enter value of a: ");
    scanf("%d",&a);

    printf("enter value of b: ");
    scanf("%d",&b);

    printf("value for w pls: ");
    scanf("%s", &w);

    printf("a is %d and b is %d\n", a,b);
    printf("valeu of w is %s", w);
    return 0;
}