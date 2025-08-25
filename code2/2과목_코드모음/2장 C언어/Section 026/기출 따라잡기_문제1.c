#include <stdio.h>
int num;
int grow();
main() {
	printf("%d", num);
	grow();
}
int grow() {
	num = 16448000;
}