
#include <stdio.h>
#include <string.h>

void slice(int m, int n, char bruh[10])
{
    int i=0;
    while((i+m)<=n)
    {
        bruh[i] = bruh[i+m];
        i++;
    }
    bruh[i+1] = '\0';
}
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    char bruh[10] = "whyaaa";
    slice(m, n, bruh);
    printf("%s", bruh);
}