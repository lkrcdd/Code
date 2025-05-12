#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    realloc(ptr, size)
    ptr이 메모리공간에 할당되어있다면 해당 주소에 대해 기존 메모리를 확장 or 새로 할당 후 복사
    ptr == NULL이면 malloc(size)
    ptr이 초기화되지 않았다면 err
    */
    int *arr;                // 초기화 안 됨 (쓰레기값)
    arr = realloc(arr, 100); // err, undefined behavior

    int *arr = NULL;
    arr = realloc(arr, sizeof(int) * 10); //== malloc
}