#include <stdio.h>
int hrdcompare(num1, num2);
main() {
	printf("%d", hrdcompare(10, 23) + hrdcompare(35, 19));
}
hrdcompare(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}