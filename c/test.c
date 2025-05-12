#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, t;
    int sz = 0;
    int *arr = NULL;

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (t < x)
        {
            sz++;
            arr = realloc(arr, sizeof(int) * sz);
            arr[sz - 1] = t;
        }
    }

    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}