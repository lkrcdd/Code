#include <stdio.h>

//변수 타입에 따른 나누기 연산의 동작

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("int div : %d, %d\n", a / b, a % b);
    // int div -> 소숫점을 고려하지 않은 연산
    printf("double div : %.9f\n", (double)a / b);
    // double div -> 소숫점 자리까지 메모리를 할당받았으므로 연산 시 소숫점 연산
    // printf("double div : %.9f\n", (double)a % b);
    // double div -> %연산은 먹히지 않음.
    return 0;
}