#include <stdio.h>
main()
{
	int a = 2, b = 3, c = 4, d;
	d = a * b + c >= 8 && c / a - b != 0;
	printf("%d\n", d);
}