#include <stdio.h>
#include <stdlib.h>
#include "readfile.h"

int main(int argc, char **argv)
{
	char* name;
	name = (char*) malloc(128*sizeof(char));

	read_file(argv[1], name);

	return 0;
}
