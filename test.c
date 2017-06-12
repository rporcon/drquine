#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	char	filename[42];
	char	command[42];

	char	*prog = "TEST%c";
	sprintf(filename, "Test_%d.c", 5);
	strcpy(command, "env -i SULLY=1 gcc ");
	fprintf(fopen(filename, "w+"), prog, 42);
	system(strcat(command, filename));
	return (0);
}
