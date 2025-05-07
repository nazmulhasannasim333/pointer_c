#include <stdio.h>

void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr, 5);
}