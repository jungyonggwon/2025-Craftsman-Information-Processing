#include <stdio.h>
main() {
	int num = 1;
	for (int i = 1; ; i++) {
		num = num * i;
		if (i > 5)
			break;
	}
	printf("%d", num);
}