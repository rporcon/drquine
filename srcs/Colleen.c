#include <stdio.h>
/*
	func
*/

char *str[] = {
	"#include <stdio.h>",
	"/*",
	"	func",
	"*/",
	"",
	"char *str[] = {",
	"",
	"};",
	"",
	"void	print_array(int i)",
	"{",
	"	putchar(9);",
	"	putchar(34);",
	"	fputs(str[i], stdout);",
	"	putchar(34);",
	"	if (i != 39)",
	"	{",
	"		putchar(',');",
	"		putchar(10);",
	"	}",
	"}",
	"",
	"int	main(void)",
	"{",
	"	/*",
	"		main",
	"	*/",
	"	int	i;",
	"",
	"	i = -1;",
	"	while (++i < 6)",
	"		puts(str[i]);",
	"	i = -1;",
	"	while (++i < 40)",
	"		print_array(i);",
	"	i = 5;",
	"	while (++i < 40)",
	"		puts(str[i]);",
	"	return (0);",
	"}"
};

void	print_array(int i)
{
	putchar(9);
	putchar(34);
	fputs(str[i], stdout);
	putchar(34);
	if (i != 39)
	{
		putchar(',');
		putchar(10);
	}
}

int	main(void)
{
	/*
		main
	*/
	int	i;

	i = -1;
	while (++i < 6)
		puts(str[i]);
	i = -1;
	while (++i < 40)
		print_array(i);
	i = 5;
	while (++i < 40)
		puts(str[i]);
	return (0);
}
