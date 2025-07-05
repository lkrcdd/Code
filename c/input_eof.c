#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[101];
    // scanf 반환값은 int -> EOF
    // 공백, 탭, 개행 등으로 구분되어 입력받음
    while (scanf("%s", str) != EOF)
        printf("%s", str);

    // fgets 반환값은 포인터
    // 한줄씩 받아옴
    while (fgets(str, sizeof(str), stdin) != NULL)
        printf("%s", str);
}