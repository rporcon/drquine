#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	main(void) {
	int		i = 5;
	char	filename[42];
	char	command[42];

	if (i <= 0)
		return (0);
	char	*prog = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%cint	main(void) {%c	int		i = %d;%c	char	filename[42];%c	char	command[42];%c%c	if (i <= 0)%c		return (0);%c	char	*prog = %c%s%c;%c	if (getenv(%cSULLY%c))%c		i--;%c	sprintf(filename, %cSully_%%d.c%c, i);%c	fprintf(fopen(filename, %cw+%c), prog, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, prog, 34, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10);%c	strcpy(command, %cenv -i SULLY=1 gcc %c);%c	system(strcat(command, filename));%c	return (0);%c}%c";
	if (getenv("SULLY"))
		i--;
	sprintf(filename, "Sully_%d.c", i);
	fprintf(fopen(filename, "w+"), prog, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, prog, 34, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10);
	strcpy(command, "env -i SULLY=1 gcc ");
	system(strcat(command, filename));
	return (0);
}
