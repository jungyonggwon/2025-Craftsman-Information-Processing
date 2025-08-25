#include <stdio.h>
mint main( )
{
	int ans;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (i==j || i+j==4) ans++;
	printf("%d", ans);
	return 0;
}