#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];    //최대 4글자 입력 가능. 마지막 원소는 \0
    scanf("%s", str); // 배열의 변수는 첫 원소의 주소를 나타내므로 기재할 필요 없다.
    // 6자 입력, scanf는 자동으로 \0 입력
    printf("%s", str);  //오버플로우 되었지만 정상 출력됨. \0전까지 출력을 진행하기 때문
    scanf("%4s", str);  //오버플로우 방지
}