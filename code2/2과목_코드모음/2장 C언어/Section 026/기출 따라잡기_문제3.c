#include <stdio.h>
#define ArrSize 5
void into(int arr[], int gn, int ao);
void PrintArr(int arr[]);
void into(int arr[], int gn, int ao) {
	arr[ao] = gn;
}
void PrintArr(int arr[]) {
	int i;
	for (i = 0; i < ArrSize; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main( ) {
	int arr[ArrSize];
	int i, j;
	for (i = 1; i < 6; i++) {
		for (j = 0; j < ArrSize; j++) {
			into(arr, (j + 1) * i % 5, j);
		}
		PrintArr(arr);
	}
	return 0;
}