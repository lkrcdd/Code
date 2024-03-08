#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[포인터 변수의 크기 체크]\n");
    printf("sizeof(char *) : %lu\n", sizeof(char *));
    printf("sizeof(int *) : %lu\n", sizeof(int *));
    printf("sizeof(double *) : %lu\n", sizeof(double *));
    printf("sizeof(unsigned int *) : %lu\n", sizeof(unsigned int *));


    printf("\n[연산자에 따른 출력 체크]\n");
    int n = 10;
    int * n_pointer = &n;
    printf("n : %d\n", n);
    printf("&n : %d\n", &n);
    printf("*n : 불가\n");
    printf("n_pointer : %d\n", n_pointer);
    printf("&n_pointer : %d\n", &n_pointer);
    printf("*n_pointer : %d\n", *n_pointer);


    printf("\n[형변환 미스매치 시 출력 체크]\n");
    double *ptr_a=&n;
    printf("포인터 : double, 변수 : int -> %d\n", *ptr_a);


    printf("\n[포인터 변수의 부적절한 초기화 예시]\n");
    int *ptr_b;
    printf("선언 직후 : %d\n", *ptr_b);
    *ptr_b=200;
    printf("임의의 숫자 대입 직후 : %d\n", *ptr_b);


    printf("\n[포인터 변수의 적절한 초기화 시 출력 체크]\n");
    int *ptr_c= &n;
    printf("&연산자로 초기화 : %d\n", ptr_c);
    int *ptr_d=NULL;
    printf("Null 초기화 : %d\n", ptr_d);


    printf("\n[배열과 포인터의 관계]\n");
    int arr[3] = { 0, 1, 2 };
    printf("배열의 이름: %p \n", arr);
    printf("*arr: %p \n", &arr);
    printf("첫 번째 요소: %p \n", &arr[0]);
    printf("두 번째 요소: %p \n", &arr[1]);
    printf("세 번째 요소: %p \n", &arr[2]);


    printf("\n[포인터 연산]\n");
    int *ptr_e = 0x0010;
    double *ptr_f = 0x0010;
    printf("두 개의 포인터 변수 e: %p, f: %p \n", ptr_e, ptr_f);
    ptr_e++;
    ptr_f++;
    printf("증가 연산 후 포인터 변수 e:%p, f: %p \n", ptr_e, ptr_f);
    

    printf("\n[포인터와 const]\n");
    int con_a=10;
    int con_b=20;
    printf("1) const int pointer의 경우\n");
    const int *ptr_g = &con_a;
    printf("포인팅된 변수값 변경 시도 - 포인터 변수를 통해 : error, expression must be a modifiable lvalue\n");
    //*ptr_g = 30;
    printf("포인팅된 변수값 변경 시도 - 해당 변수로 직접 : ");
    con_a=30;
    printf("%d\n", con_a);
    printf("포인팅 변경 시도 : error, 동일 증상\n");
    //*ptr_g=&con_b;
    printf("2) int const pointer의 경우\n");
    int *ttt=&con_a;
    ttt=&con_b;
}