#include <stdio.h>

int main(int argc, char ** argv){
	int i = 1;

	start:
	printf("%s\n", argv[i]);
	i++;
	if (i < argc) goto start;

	return 0;
}
