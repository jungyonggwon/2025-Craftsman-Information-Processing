#include <stdio.h>
main()
{
	int i = 250;
	float a = 125.23f;
	float b = 314.1592e+5;
	char c = 'A';
	char dd[ ] = "Korea";
	printf("10진수i = %d\t 8진수i = %o\n", i, i);
	printf("a = %8.2f, b = %e\n", a, b);
	printf(
	"c값은 문자로 %c이고 아스키 코드로 %d이다.\n", c, c);
	printf("%-10s, %10s\n\r", dd, dd);
}