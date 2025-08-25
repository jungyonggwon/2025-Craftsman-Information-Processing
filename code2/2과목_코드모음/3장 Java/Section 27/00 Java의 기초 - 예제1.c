#include <stdio.h>
void main()
{
	int i, j = 0;
	for (i = 1; i < 8; i++)
	{
		j = j + i;
	}
	printf("%d, %d", i, j);
}