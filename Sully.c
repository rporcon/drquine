#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	main(void) {
	int		i = 5;
	char	*filename;
	int		fd;
	char	*command;
	char	*exe;

	if (i <= 0)
		return (0);
	if (getenv("SULLY"))
		i--;
	char	*prog = "#define _GNU_SOURCE%c#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%cint	main(void) {%c	int		i = %d;%c	char	*filename;%c	int		fd;%c	char	*command;%c	char	*exe;%c%c	if (i <= 0)%c		return (0);%c	if (getenv(%cSULLY%c))%c		i--;%c	char	*prog = %c%s%c;%c	asprintf(&filename, %cSully_%%d.c%c, i);%c	fd = open(filename, O_RDWR|O_CREAT, 0770);%c	dprintf(fd, prog, 10, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, prog, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10);%c	exe = strdup(filename);%c	strtok(exe, %c.c%c);%c	asprintf(&command, %cexport SULLY=1 && gcc -o %%s %%s && ./%%s%c, exe, filename, exe);%c	system(command);%c	return (0);%c}%c";
	asprintf(&filename, "Sully_%d.c", i);
	fd = open(filename, O_RDWR|O_CREAT, 0770);
	dprintf(fd, prog, 10, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, prog, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10);
	exe = strdup(filename);
	strtok(exe, ".c");
	asprintf(&command, "export SULLY=1 && gcc -o %s %s && ./%s", exe, filename, exe);
	system(command);
	return (0);
}
