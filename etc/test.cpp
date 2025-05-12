#include <iostream>
#include <vector>
#include <string>

int main()
{
    int base = 65;             // 아스키 코드 A의 값
    int ascii_count[26] = {0}; // 아스키 코드 횟수 카운트 배열

    // 예시 문자열 벡터
    std::vector<std::string> orders;
    orders.push_back("APPLE");
    orders.push_back("BANANA");
    orders.push_back("CHERRY");
    orders.push_back("DATE");

    for (int i = 0; i < 26; i++)
    {
        for (std::string str : orders)
        {                                               // 여기서 string 대신 std::string을 사용할 수 있습니다.
            size_t result = str.find((char)(base + i)); // 대문자 A-Z 찾기
            if (result != std::string::npos)
            {
                ascii_count[i]++;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++)
    {
        std::cout << "Count of " << (char)(base + i) << ": " << ascii_count[i] << std::endl;
    }

    return 0;
}
