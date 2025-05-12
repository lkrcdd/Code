# C/CPP

1. cpp compiler
2. convention
3. pointer




* 소숫점 나누기 시 형변환
* scanf시 파라미터로 받는게 주솟값이어서 배열은 그냥넣어도됨
* class
* keyword
* VLA, malloc

## 1. cpp compiler
STL - map, vector, list, namespace
C++11 - auto, nullptr / (14)
C++17 - 
C++20 - / (23)

## 2. convention
file name : 소문자, snake_case
Indentation : 공백 4칸 사용, 탭 대신 공백 사용
Braces : 중괄호 시 열 때는 같은 라인, 닫을 때는 새로운 라인
Naming Conventions
    변수: 소문자, snake_case
    함수: 소문자, snake_case
    상수: 대문자, snake_case
    매크로 : 대문자, snake_case
    구조체: PascalCase
Comments
// line comments
/* block comments */
/*
 * function name
 * purpose
 * parameter
 * return
 */
int function(int n) { 
    ... 
}
문자열: 큰따옴표 (")
배열: 크기 명시
함수 : 하나의 역할만 하도록 작성, 유효성 검사 추가
오류 처리 : 오류 발생 시, 반환 값 체크 및 예외 처리
    if (ptr == NULL) { /* handle error */ }

## 3. pointer
1. 포인터 변수의 크기
32bit system은 32bit(4byte), 64bit system은 64bit(8byte).
-> 이 때문에 인식 가능한 메모리 용량이 달라지는 것(32bit에서는 최대 2^32Byte(약 4GB), 64bit에서는 최대 2^64Byte까지)

2. 포인터 변수의 타입 - 선언 시
- "*"이 타입을 표현한 것(연산자로써의 *과는 다름)
- int, double 등의 기존 타입은 그저 "가리킬 변수의 데이터 타입"을 표현한 것.
- 타입에 따라 변수의 크기가 달라지지 않음.
- 타입 미스매치 시 자동 형변환 수행됨.

3. 연산자 - 값 대입 등의 연산 시
// printf의 %p -> 포인터 출력 시 사용
"&" 연산자 : 시작 주소값 반환
"*" 연산자 : 해당 변수에 저장된 값을 주소라고 인식하고, 그 주소에 해당되는 메모리 공간으로 가서 저장된 값을 꺼내온다.
- 출력 내역
n : 10
&n : 1876947708 (n의 주소값)
*n : 출력 불가
n_pointer : 1876947708  (포인터 변수에 저장된 값==&n)
&n_pointer : 1876947696 (포인터 변수의 주소값)
*n_pointer : 10 ("포인터 변수"에 저장된 "메모리 주소"에 저장된 값)

4. 포인터 초기화
NULL 또는 &연산자로만 해야 함.

5. 배열과 포인터
배열 == 포인터, 배열은 내부적으로 포인터로 처리되므로.
-> "배열의 이름"은 "배열의 첫 번째 요소를 가리키는 포인터"로 해석 가능. 
-> arr == &arr[0] -> 배열의 이름은 상수(주소값이므로)
-> 배열의 나머지 요소도 포인터 변수를 통해 주솟값 연산을 수행하여 접근 가능.
-> char *str="hello world" 형태로 포인터 변수를 문자열 배열로도 쓸 수 있음.
-> 배열 or 문자열을 함수의 parameter로 넘겨줄 때, 이러한 원리를 사용해서 포인터로 넘겨받는다. 값 통째로 복사해서 넘기진 못함.
ex_1) int func_a(int *p, ~) { ~ }
ex_2) int func_b(int p[], ~) { ~ } *p[]는 parameter로만 사용가능

6. 포인터 연산
1 증감 당 sizeof(type)만큼 주소값이 증감됨

7. 포인터 배열
배열 요소가 포인터 -> 포인터의 포인터 형식임.

8. scanf
scanf("~", 주소값);
-> scanf("%d", &num);
-> scanf("%s", str); -> 배열(문자열)의 이름 자체가 주소값

9. pointer & const
1) const int *ptr_g = &con_a -> 포인터 변수 ptr_g가 가리키는 변수의 타입은 "const int" 형이다
2) int * const ptr_h = &con_a -> 포인터 "상수" ptr_h가 가리키는 변수의 타입은 "int"형이다.



*ptr=&a; 와 ptr=&a; ?






## 기타
c의 attribute
c의 union
언더스코어(__)의 중요성
예약된 식별자:

C 및 C++ 표준에 따르면, 두 개 이상의 언더스코어로 시작하거나 끝나는 식별자는 예약된 식별자입니다. 이는 이러한 식별자가 이후의 표준 라이브러리나 컴파일러 구현에서 사용될 수 있음을 의미합니다.
예를 들어, __attribute__, __asm__, __declspec, __inline, __cplusplus 등이 이에 해당합니다.
사용자의 정의 식별자와의 충돌 방지:

예약된 식별자를 사용하면, 사용자 정의 이름과 충돌이 발생할 수 있습니다. 예를 들어, 사용자가 정의한 함수나 변수가 __myFunction과 같은 이름을 가진 경우, 이것이 컴파일러나 표준 라이브러리에서 이미 사용되고 있다면 예기치 않은 동작을 유발할 수 있습니다.
따라서, 프로그래머는 사용자 정의 이름에 두 개 이상의 언더스코어를 포함하지 않도록 해야 합니다.
특별한 기능을 제공하는 식별자:

두 개의 언더스코어로 둘러싸인 이름은 주로 컴파일러의 특정 기능이나 확장성을 제공하기 위해 사용됩니다. 이는 일반적으로 다음과 같은 목적으로 사용됩니다:
속성(attribute): __attribute__는 변수나 함수에 특정 속성을 지정합니다.
어셈블리 코드: __asm__는 인라인 어셈블리 코드를 삽입하는 데 사용됩니다.
최적화 지시어: __inline은 인라인 함수로 정의하는 데 사용됩니다.



## ?
메인함수에서 return 하면 어디로가는가

static(ch9)

const와 포인터 변수 에 const(ch14)