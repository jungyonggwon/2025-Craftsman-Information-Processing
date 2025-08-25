#include <stdio.h>
int main()
{
	int* pnum, Num1 = 200, Num2 = 300;
	pnum = &Num1;
	(*pnum) += 40;
	pnum = &Num2;
	(*pnum) -= 50;
	printf("Num1=%d\nNum2=%d", Num1, Num2);
}