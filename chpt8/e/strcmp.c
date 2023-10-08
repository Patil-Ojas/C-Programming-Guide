

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "supp";
    char *s2 = "suop";

    //works with both ptr and arr :)
    int commp = strcmp(s1,s2);
    printf("%d", commp);

    return 0;
}