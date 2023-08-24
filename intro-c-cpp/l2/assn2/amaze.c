#include <stdio.h>

void amaze0() {
	int i;
	printf("amaze0:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze1() {
	int i = 0;
	printf("amaze1:\t");
	while (i <= 10) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}

void amaze2() {
	int i = 0;
	printf("amaze2:\t");
	for (;;) {
		if (i > 10) break;
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}

void amaze3() {
	int i = 0;
	printf("amaze3:\t");
	do {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	} while (i < 10);
	printf("\n");
}

void amaze4() {
	int i = 0;
	printf("amaze4:\t");
	start:
	if (i % 2 == 1) goto odd;
	else goto incr;

	odd:
	printf("%d ", i);

	incr:
	i++;
	if (i < 10) goto start;
	printf("\n");
}

void amaze5() {
	int i = 10;
	printf("amaze5:\t");
	while(i >= 0) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i--;
	}
	printf("\n");
}

void amaze6() {
	int i = 0;
	printf("amaze6:\t");
	for(; i <= 10; i++) {
		switch(i % 2) {
			case 1:
				printf("%d ", i);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	amaze0();
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	return 0;
}

