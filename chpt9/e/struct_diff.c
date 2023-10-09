
//alternative way to use struct

#include <stdio.h>
#include <string.h>

struct reee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int q = 3;
    struct reee r1 = {10, 10.25, "harry"};

    r1[1].name = "weee";
    printf("%d\n", r1.code);
    printf("%f\n", r1.salary);
    printf("%s", r1.name);
}