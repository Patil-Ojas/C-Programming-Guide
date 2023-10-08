
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[10];
    char st2[10];

    char c;
    int comp;
    int i=0;

    printf("enter first str: ");
    scanf("%s", st1);

    printf("enter second char by char:\n");

    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';
    comp = strcmp(st1, st2);

    printf("first str is %s\n", st1);
    printf("first str is %s\n", st1);
    printf("comparisn is %d", comp);

    return 0;

}