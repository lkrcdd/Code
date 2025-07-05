#include <iostream>

using namespace std;

int main()
{
    int a, b;

    // input data
    cin >> a >> b;
    // cin : istream의 전역 객체
    // >> : 본래 shift 연산자. 여기서는 입력 연산자.

    // output data
    cout << (a + b);
    // 출력 버퍼에 입력
    // 출력 지연 또는 프로그램 종료 시 출력됨

    cout << flush;
    // 출력 버퍼를 강제로 비우고 즉시 화면에 출력

    cout << (a + b) << endl;
    // 버퍼에 \n 입력 후 flush

    // << : 본래 shift 연산자. 여기서는 overloading 되어 쓰인다.
    // data와 상호작용 : 출력
    // 함수와 상호작용 : 실행

    return 0;
}
