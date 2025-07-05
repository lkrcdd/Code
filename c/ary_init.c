#include <stdio.h>
#include <string.h>

int global_arr[5]; // 전역 배열은 자동으로 0으로 초기화됨

int main()
{
    int arr[5] = {1, 2}; // {1, 2, 0, 0, 0}

    int arr2[] = {10, 20, 30}; // 원소 갯수에 맞춰 크기 자동 지정됨.

    int arr3[5];
    memset(arr3, 0, sizeof(arr3)); // {0, 0, 0, 0, 0}
}
