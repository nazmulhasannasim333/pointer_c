#include <stdio.h>

void func(int x)
{
    x = 20;
}

int main()
{
    int x = 10;
    printf("Before function call, x = %d\n", x);
    func(x);
    printf("After function call, x = %d\n", x);
    return 0;
}