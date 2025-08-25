#include <stdio.h>
int main()
{
	int n1 = 172;
	int n2 = 387;
	while( n1 != n2 )
	{
		if ( n1 > n2 ) n1-=n2;
		else n2-=n1;
	}
	printf("%d", n1);
	return 0;
}