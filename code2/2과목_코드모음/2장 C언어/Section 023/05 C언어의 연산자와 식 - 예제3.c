#include <stdio.h>
main()
{
	int a = 2, b = 3, c, d, e;
	c = a > 3 && b > 2;
	d = a > 3 || b > 2;
	e = !c;
	printf("%d, %d, %d\n", c, d, e);
}