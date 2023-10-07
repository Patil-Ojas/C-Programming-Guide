
#include <stdio.h>
#include <string.h>

char copy300(char str1[100], char str2[100])
{
    char temp[100], len;
    len = strlen(str1);

    for (int i=0; i<=len; i++)
    {
        str2[i] = str1[i];
    }
    str2[len+1] = '\0';

}

int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    char str3[100];

    copy300(str1, str2);
    printf("using mehnat %s\n", str2);

    strcpy(str3, str1);
    printf("using fn %s", str3);

    return 0;
}