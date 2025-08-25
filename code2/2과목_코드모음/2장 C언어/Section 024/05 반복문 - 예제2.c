#include <stdio.h>
main()
{
	int i = 0, hap = 0;
	while (i < 10)
	{
		i++;
		hap += i;
	}
	printf("%d, %d\n", i, hap);
}