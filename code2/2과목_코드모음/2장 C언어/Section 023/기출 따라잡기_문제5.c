#include <stdio.h>
int main( )
{
	int x = 5, y = 10, z = 20, sum;
	x += y;
	y -= x;
	z %= y;
	sum = x + y + z;
	printf("%d", sum);
	return 0;
}