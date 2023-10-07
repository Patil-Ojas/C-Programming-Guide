#include <stdio.h>

void check(int i)
{
    printf("inside check fn, address is %d\n", &i);
    printf("inside check fn, address is %d\n", i); //underestanding 
}
void checker(int *i)
{
    printf("inside checker fn, address is %d", &i);
    printf("inside checker fn, address is %d", i); //understanding
}
int main()
{
    int i=3;
    printf("%d\n", &i);

    check(i);
    checker(&i);
    return 0;
}