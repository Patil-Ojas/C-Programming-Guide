
#include <stdio.h>

int changer(int a)
{
    a = 5;
    return a;
}
int main()
{
    int b = 78, c;
    printf("%d \n", b);

    c = changer(b);          //shit doenst wor with array :)
    
    printf("%d\n", b);
    printf("%d", c);
    
    return 0;;
}