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