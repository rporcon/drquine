#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int		main(void) {
	int		i = 5;
	char	filename[42];
	char	command[42];

	if (i <= 4)
		return (0);
	sprintf(filename, "Sully_%d.c", i);
	char	*prog = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c#include <fcntl.h>%c%cint	main(void) {%c	int		i = %d;%c	char	filename[42];%c	char	command[42];%c%c	if (i <= %d)%c		return (0);%c	sprintf(filename, %cSully_%%d.c%c, i);%c	char	*prog=%c%s%c;%c	return (0);%c}";
	i--;
	fprintf(fopen(filename, "w+"), prog, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, i, 10, 10, 34, 34, 10, 34, prog, 34, 10, 10, 10);
	strcpy(command, "gcc ");
	system(strcat(command, filename));
	return (0);
}
