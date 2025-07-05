#include <stdio.h>
#include <stdlib.h>

int main()
{
    int up, down, max;
    scanf("%d %d %d", &up, &down, &max);

    int distance = up - down;     // 하루에 올라갈 수 있는 거리
    int temp = max - up;          // 한번에 올라갈 수 있는 위치 = 임계선이라 칭함
    int uped = temp / distance;   // 올라간 날 수
    int remain = temp % distance; // 임계선까지의 남은 미터

    int sum = uped;  // 이미 올라온 날수(현재 위치 <= 임계선)
    if (remain != 0) // 임계선까지의 거리가 조금 남아있다면 하루를 더 씀
        sum++;
    sum++; // 10번 줄 코드에 의해 짜여진 로직이므로 하루 추가
    printf("%d", sum);
}
