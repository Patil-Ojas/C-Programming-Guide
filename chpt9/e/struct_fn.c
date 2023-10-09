
//ah yes use fn and ptr aand struct mhm

#include <stdio.h>
#include <string.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

void show(struct emp a)
{
    printf("%d \n", a.code);
    printf("%f\n", a.salary);
    printf("%s", a.name);
}

int main()
{
    struct emp e;
    struct emp *ptr;
    ptr = &e;

    ptr->code = 47;
    ptr->salary = 98.5;
    strcpy(ptr->name, "bruuh");

    show(e);
    return 0;
}