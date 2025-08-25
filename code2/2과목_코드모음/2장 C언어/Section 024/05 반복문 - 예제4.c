#include <stdio.h>
main()
{
	int i = 0, hap = 0;
	while (1)
	{
		i++;
		if (i > 10)
			break;
		if (i % 5 == 0)
			continue;
		hap += i;
	}
	printf("%d,%d\n", i, hap);
}