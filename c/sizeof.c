#include <stdio.h>
#include <stdlib.h>

struct Sample
{
    int a;
    double b;
    char c;
};

int main()
{
    // 1. 타입에 대한 sizeof
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(char) = %zu\n\n", sizeof(char));

    // 2. 배열에 대한 sizeof
    int arr[10];
    printf("sizeof(arr) = %zu\n\n", sizeof(arr)); // 배열의 전체 크기 (10 * sizeof(int))

    // 3. 포인터에 대한 sizeof
    int *ptr;
    printf("sizeof(ptr) = %zu\n\n", sizeof(ptr)); // 포인터 크기 (보통 4 또는 8바이트)

    // 4. 구조체에 대한 sizeof
    struct Sample sample;
    printf("sizeof(struct Sample) = %zu\n\n", sizeof(struct Sample)); // 구조체의 크기(메모리 정렬 및 패딩 때문에 크기 증가)

    // 5. 동적 메모리 할당에 대한 sizeof
    int *dynamicArr = malloc(10 * sizeof(int));
    printf("sizeof(dynamicArr) = %zu\n\n", sizeof(dynamicArr)); // 포인터 크기만 반환 (배열 크기 아님)
    free(dynamicArr);

    // 6. sizeof 연산자 자체의 특징
    printf("sizeof(sizeof(int)) = %zu\n", sizeof(sizeof(int))); // sizeof(int)의 타입은 size_t이므로 결과는 size_t의 크기

    return 0;
}
