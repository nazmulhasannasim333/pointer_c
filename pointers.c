#include <stdio.h>

int main()
{
    int x = 15;
    printf("Value of x: %d\n", x);
    int *ptr;
    ptr = &x;
    printf("Address of x: %p\n", &x);
    return 0;
}