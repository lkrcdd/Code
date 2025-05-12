#include <stdio.h>
#include <stdlib.h> // for malloc

int main()
{
    // input ary size
    int n;
    scanf("%d", &n);

    // 1. VLA (Variable Length Array)
    int ary[n];

    // 2. malloc (Dynamic Memory Allocation)
    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL)
        return 1; // memory allocation failed
    free(arr);
    return 0;
}