#include <stdio.h>

int main(void) {
	int N, X; //N���� �̷���� ����, �� ������ ���� ���� X
	
	int B; //�Է� ���� ����

	scanf("%d %d", &N, &X);
	for (int k = 0; k < N; k++) {
		scanf("%d", &B);
		if (B < X) {
			printf("%d ", B);
		}
	}

	return 0;
}
