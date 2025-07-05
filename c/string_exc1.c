#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char str[5] = 'a';  ->  err
    char str[5] = "a";
    printf("%s", str);

    // str = "abcd";   -> x, 배열 주소를 나타내므로 문자열로 대체 불가
    // if(str[0] == "a")
    //     printf("\"a\" true");
    // if(str[0] == 'a')
    //     printf("\'a\' true");
}