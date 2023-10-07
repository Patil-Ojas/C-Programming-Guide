
#include <stdio.h>

int tenner(int *reee)
{
    *reee = *reee*10;
    return *reee;
    // return 0;  //also works
}
int main()
{
    int ree;
    scanf("%d", &ree);
    tenner(&ree);
    printf("%d", ree);
    return 0;
}