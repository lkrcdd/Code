#include <stdio.h>
#include <stdlib.h>

int main()
{
    // matrix로 받을 경우 다음과 같이 받을 수 있다.
    char mat[5][16];

    for (int i = 0; i < 5; i++)
        scanf("%s", mat[i]);

    for (int i = 0; i < 5; i++)
    {
        printf("%s", mat[i]);
        printf("\n");
    }
}
