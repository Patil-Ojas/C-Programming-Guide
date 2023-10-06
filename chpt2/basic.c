#include <stdio.h>
#include <math.h>

int main()
{   
    //to the powa
    int a=5;
    // printf("%f \n", pow(a,2));

    //oooooooooooooooooohh
    printf("%f \n", 2/5);
    printf("%f\n", 2.0/5);

    int x = 2;
    int y = 3;
    //this is where the scam is at in c
    //c follows left to right associativity cuz why not
    printf("%d", x*y/y*x);  
    
    return 0;
}
