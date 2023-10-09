
//feel for custom data type, creates alias

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} e1;

int main()
{
    // struct employee e;
    // struct employee *ptr;
    e1 e;
    e1 *ptr;

    ptr = &e;
    ptr->code = 48;
    ptr->salary = 56.12;
    strcpy(ptr->name, "ree");

    printf("%d", e.code);
    return 0;

}