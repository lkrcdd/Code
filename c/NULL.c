#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    // 1. 조건문의 NULL
    int *ptr = NULL;
    if (!ptr)
        printf("ptr is NULL");
    // NULL == 0
    // !0 == 1
    // 1 == true


    // 2. '\0', NULL, 0
    char str[10] = "abc";
    if (str[3] == '\0')
        printf("str[3]은 문자열 종료 문자입니다. (\\0)\n");

    if (str[3] == 0)
        printf("str[3] == 0 도 같습니다.\n");

    if (str[3] == NULL)
        printf("가능은 하나, 의미적으로 부적절");

    return 0;
}
