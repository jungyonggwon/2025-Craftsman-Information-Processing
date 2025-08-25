#include <stdio.h>
main() {
	for (int i = 9; i > 0; i--) {
		switch(i % 2) {
		case 1:
			printf("%d", i);
			break;
		default:
			printf("*");
			break;
		}
	}
	return 0;
}