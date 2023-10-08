
#include <stdio.h>
#include <string.h>

int main()
{
    char a='G';
    // gets(a);
    // gets(b);

    int ac_a;
    ac_a = (int)a;

    char e = (char)ac_a;

    printf("%d\n", a);
    printf("%d\n", ac_a+1);
    printf("%c", e);
}