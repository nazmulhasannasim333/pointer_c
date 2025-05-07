#include <stdio.h>

char fun(char s[])
{
    printf("%s\n", s);
}

int main()
{
    char s[10];
    scanf("%s", &s);
    fun(s);
    return 0;
}