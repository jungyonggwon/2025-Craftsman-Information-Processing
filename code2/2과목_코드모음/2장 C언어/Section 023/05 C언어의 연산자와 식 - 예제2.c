#include <stdio.h>
main()
{
	int a = 5, b = 7, c, d, e, f;
	c = a & b;
	d = a | b;
	e = a ^ b;
	f = ~b;
	a = a >> 1;
	b = b << 3;
	printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
}