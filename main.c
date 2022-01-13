#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char* name;
	FILE* fptr;
	fptr = fopen(argv[1], "r");

	if (fptr == NULL) {
		printf("error\n");
		exit(1);
	}

	fscanf(fptr, "%s", name);
	printf("%s\n", name);

	fclose(fptr);
	return 0;
}
