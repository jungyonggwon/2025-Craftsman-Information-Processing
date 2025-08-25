#include <stdio.h>
main() {
	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2);
}