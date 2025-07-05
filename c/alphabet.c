#include <stdio.h>
#include <stdlib.h>

// 백준 1157

int main()
{
    char str[1000001];
    int dic[26] = {0};
    scanf("%s", str);

    // 소문자로 변경하는 or 연산 (하단 참조)
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i] | 32;
        dic[ch - 'a']++;
    }

    // 많이 나온 알파벳 출력(대소 구분 x)
    int max = 0;
    int max_index = 0;
    int dup = 0;
    for (int i = 0; i < 26; i++)
    {
        if (dic[i] > max)
        {
            max = dic[i];
            max_index = i;
            dup = 0;
        }
        else if (dic[i] == max)
            dup = 1;
    }

    if (dup == 1)
        printf("?");
    else
        printf("%c", 'A' + max_index);
}

/*
대소문자 간 ASCII 값은 단 하나의 비트만 다름.
ex)
'A' 65 1000001
'a' 97 1100001

'B' 66 1000010
'b' 98	1100010
...
'Z' 90 1011010
'z' 122 1111010

A | 32
= 0100 0001 | 0010 0000
= 0110 0001
= 'a'
*/