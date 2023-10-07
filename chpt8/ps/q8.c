
#include <stdio.h>
#include <string.h>

void check(char s[100], char c)
{
    int count = 0;
    for (int i=0; s[i]!='\0'; i++)
    {
        if (s[i]==c)
        count = count+1;

        else
        continue;
    }
    printf("%d", count);
}

int main()
{
    char s[100];
    gets(s);

    char c;
    scanf("%c", &c);

    check(s, c);
    return 0;
}