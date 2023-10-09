
#include <stdio.h>
#include <string.h>

// pretty much abiity to have user defined data-type!

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int q = 3;

    struct employee ramesh;
    // ramesh.code = 1031;
    // ramesh.salary = 20.15;
    // // ramesh.name = "wont work";
    // strcpy(ramesh.name,"will work");

    scanf("%d", &ramesh.code);
    scanf("%f", &ramesh.salary);
    scanf("%s", ramesh.name);

    printf("%d\n", ramesh.code);
    printf("%f\n", ramesh.salary);
    printf("%s", ramesh.name);

    // but, what for multiple employees?
    return 0;
}