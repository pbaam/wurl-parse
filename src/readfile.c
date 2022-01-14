#include <stdio.h>
#include <stdlib.h>

void read_file(char* filename, char* name)
{
	FILE* fptr;
	fptr = fopen(filename, "r");

	if (fptr == NULL) {
		printf("error\n");
		exit(1);
	}

	fscanf(fptr, "%s", name);

	fclose(fptr);
}
