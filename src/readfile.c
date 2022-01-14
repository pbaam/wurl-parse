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

	if(fgets(name, 64, fptr) != NULL) {
		printf("%s\n", name);
	}

	fclose(fptr);
}
