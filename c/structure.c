#include <stdio.h>
#include <stdlib.h>

struct Temp
{
    int data;
};

int main()
{
    struct Temp temp1; // struct 변수 선언
    temp1.data = 1;

    struct Temp *temp2 = &temp1; // struct 변수에 대한 포인터 변수 선언.
    printf("%d", temp2->data);

    
}