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
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    *(arr + 2) = 45;
    fun(arr, n);
}