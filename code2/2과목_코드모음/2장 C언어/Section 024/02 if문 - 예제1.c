#include <stdio.h>
main()
{
	int a = 15, b;
	if (a > 10)
		b = a – 10;
	b = b + (10 – b);
	printf("%d\n", b);
}