#include <stdio.h>

int main(int argc, char **argv)
{
	char* name;

	read_file(argv[1], name);
	printf("%s\n", name);

	return 0;
}
