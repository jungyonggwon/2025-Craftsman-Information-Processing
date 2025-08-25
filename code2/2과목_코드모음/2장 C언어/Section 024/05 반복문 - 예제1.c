#include <stdio.h>
main()
{
	int i, hap = 0;
	for(i = 1; i <= 10; ++i)
	{
		hap += i;
	}
	printf("%d, %d\n", i, hap);
}