#include <stdio.h>
hrd(num) {
	if (num <= 0)
		return;
	printf("%d ", num);
	hrd(num - 1);
}
main() {
	hrd(5);
	return 0;
}