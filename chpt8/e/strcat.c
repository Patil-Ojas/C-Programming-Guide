
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "yo";
    char st2[] = "sup";

    //shit doesnt work wiith ptr declaration huh

    strcat(st1, st2);
    printf("%s", st1);

    return 0;
}