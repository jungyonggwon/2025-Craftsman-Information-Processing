#include <stdio.h>
main()
{
	int i = 0, hap = 0;
	do
	{
		i++;
		hap += i;
	} while(i < 10);
	printf("%d, %d\n", i, hap);
}