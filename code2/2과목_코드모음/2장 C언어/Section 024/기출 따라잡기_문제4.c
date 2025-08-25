#include <stdio.h>
int main()
{
	double num = 0.01;
	double res = 0;
	int cnt = 0;
	while(cnt < 100)
	{
		res += num;
		cnt++;
	}
	printf(res == 1 ? "true" : "false");
	return 0;
}