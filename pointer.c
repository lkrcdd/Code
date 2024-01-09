#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=================\n");
    printf("포인터 변수의 크기 체크\n");
    printf("sizeof(char *) : %lu\n", sizeof(char *));
    printf("sizeof(int *) : %lu\n", sizeof(int *));
    printf("sizeof(double *) : %lu\n", sizeof(double *));
    printf("sizeof(unsigned int *) : %lu\n\n", sizeof(unsigned int *));

    printf("연산자에 따른 출력 체크\n");
    int n = 10;
    int * n_pointer = &n;
    printf("n : %d\n", n);
    printf("&n : %d\n", &n);
    printf("*n : 불가\n");
    printf("n_pointer : %d\n", n_pointer);
    printf("&n_pointer : %d\n", &n_pointer);
    printf("*n_pointer : %d\n", *n_pointer);

    printf("형변환 미스매치 시 출력 체크\n");
    double *ptr_a=&n;
    printf("포인터 : double, 변수 : int -> %d\n", *ptr_a);

    printf("포인터 변수의 부적절한 초기화 시 출력 체크\n");
    //int *ptr;
    //printf("선언 직후 : %d\n", *ptr); -> exception
    //*ptr=200; -> exception
    //printf("임의의 숫자 대입 직후 : %d\n", *ptr);
    printf("포인터 변수의 적절한 초기화 시 출력 체크\n");
    int *ptr_b= &n;
    int *ptr_c=NULL;
    printf("&연산자로 초기화 : %d\n", ptr_b);
    printf("Null 초기화 : %d\n", ptr_c);
}