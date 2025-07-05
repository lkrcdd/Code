#include <stdio.h>
#include <stdlib.h>

// 배열 재할당 문제

int main()
{
    int ary[5] = {1, 2, 3, 4, 5};
    int ary2[5] = {6, 7, 8, 9, 10};

    // ary = ary2;  -> err, 배열 이름이 주소를 나타내므로 변수처럼 변경 불가.

    int *ary3 = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        ary3[i] = i;
    int *ary4 = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        ary4[i] = i + 5;
    ary3 = ary4;
    for (int i = 0; i < 5; i++)
        printf("%d ", ary3[i]);
    // 가능, 포인터 변수가 가리키는 주소를 변경하는 것이기 때문
    // 그러나 메모리 누수 발생(기존 ary3로 확보된 메모리가 해제 안됨)
}