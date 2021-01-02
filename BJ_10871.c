#include <stdio.h>

int main(void) {
	int N, X; //N개로 이루어진 수열, 그 수열과 비교할 정수 X
	
	int B; //입력 받을 정수

	scanf("%d %d", &N, &X);
	for (int k = 0; k < N; k++) {
		scanf("%d", &B);
		if (B < X) {
			printf("%d ", B);
		}
	}

	return 0;
}
