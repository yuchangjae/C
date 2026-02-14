#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a;
	int i;
	int j;
	int k;
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = a; j >= i + 1; j--) {
			printf(" ");
		}
		for (k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}