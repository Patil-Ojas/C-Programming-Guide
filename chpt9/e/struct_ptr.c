
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
    //what we usually do
    // int a;
    // int ptr1 = &a;
    //so now
    struct employee e1;
    struct employee *ptr;
    
    ptr = &e1;
    // *ptr.code = 102; //this wont work cuz of operator heirarchy
    (*ptr).code = 103;
    ptr->salary = 12.987;
    printf("%d\n", e1.code);
    printf("%f", e1.salary);

    return 0;
}