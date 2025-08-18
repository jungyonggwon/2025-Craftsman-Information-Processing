#include <stdio.h>


void intswap(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}


void testfunc(int *a, int *b, int *c)
{
    if (*c % 2 == 0)
        intswap(a, b);
    else
        intswap(a, c);
}


int gcd(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return gcd(b, a % b);
}


int main( )
{
    int a = 5;
    int b = 4;
    int test1 = 15;
    int test2 = 12;
    int test = gcd(test1, test2);

    switch(test % 2)
    {
        case 1:
            testfunc (&a, &b, &test2);
        defalt :
        testfunc(&a, &b, &test1);
    }
    printf("%d-%d", a, b);
    return 0;
}