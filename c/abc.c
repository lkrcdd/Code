#include <stdio.h>
#include <stdlib.h>

int and (int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    return 1;
}

int nand(int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 0;
    }
    return 1;
}

int or (int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    return 1;
}

int not(int i)
{
    if (i == 0)
    {
        return 1;
    }
    return 0;
}

// buffer

int XOR(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    else if (a == 1 && b == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void main()
{

    return;
}