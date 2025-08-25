#include <stdio.h>
#include <stdbool.h>
bool numTest(int n) {
	int i = 2;
	if ( n < 2 ) return false;
	else if ( n == 2 ) return true;
	while(1)
	{
		if ( n % i == 0 ) return false;
		else if ( i * i > n ) break;
		i++;
	}
	return true;
}
int main()
{
	int j = 0;
	int res = 0;
	for (j = 1; j <= 20; j++)
	{
		if ( numTest(j) ) res += j;
	}
	printf("%d", res);
	return 0;
}