#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    // stdin : 파일 포인터 매크로
    printf("%s", str);
}