#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	switch (num) {
	case 1:
		printf("1을 입력\n");
		break;
	case 2:
		printf("2를 입력\n");
		break;
	case 3:
		printf("3을 입력\n");
		break;
	default:
		printf("입력 오류\n");
		break;
	}
	return 0;
}