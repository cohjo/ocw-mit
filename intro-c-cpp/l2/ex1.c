#include <stdio.h>
#include <stdlib.h>

int triangular(int n) {
	int prev_tri = 0;
	printf("( ");
	for (int i = 1; i <= n; i++) {
		prev_tri += i;
		printf("%d ", prev_tri);
	}
	printf(")");
	return prev_tri;
}

int main(int argc, char *argv[]) {
	int i = 1;
	int result = 0;
	if (argc > i) {
		result = triangular(*argv[1]);
	}
	return result;
}
