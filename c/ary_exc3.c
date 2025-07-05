#include <stdio.h>
#include <stdlib.h> // for malloc

// memory reallocate, 배열 복사

int main()
{
    // input ary size
    int n;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL)
        return 1;

    // input new size
    scanf("%d", &n);

    arr = realloc(arr, sizeof(int) * n);
    if (arr == NULL)
        return 1;

    // 이 때, 기존에 저장된 값들은 유지됨!

    free(arr);
    return 0;
}