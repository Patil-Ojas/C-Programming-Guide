
#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 45;
    facebook[0].salary = 45.56;
    strcpy(facebook[0].name, "hou");

    printf("%d", facebook[0].code);
    return 0;
}