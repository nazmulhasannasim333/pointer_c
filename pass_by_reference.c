#include <stdio.h>

void func(int *x)
{
    printf("Inside function, address of x: %p\n", x);
    printf("Inside function, value of x: %d\n", *x);
    *x = 20;
}

int main()
{
    int a = 10;
    printf("Inside Main --- Address of a: %p\n", &a);
    printf("Inside Main --- Before function call, a = %d\n", a);
    func(&a);
    printf("Inside Main --- After function call, a = %d\n", a);
    return 0;
}