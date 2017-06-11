#include <libft.h>
/*
**	func
*/

char *str[] = {
	"#include <libft.h>",
	"/*",
	"**	func",
	"*/",
	"",
	"char *str[] = {",
	"",
	"};",
	"",
	"void	print_array(int i)",
	"{",
	"	ft_putchar(9);",
	"	ft_putchar(34);",
	"	ft_putstr(str[i]);",
	"	ft_putchar(34);",
	"	if (i != 39)",
	"	{",
	"		ft_putchar(',');",
	"		ft_putchar(10);",
	"	}",
	"}",
	"",
	"int	main(void)",
	"{",
	"	/*",
	"	**	main",
	"	*/",
	"	int	i;",
	"",
	"	i = -1;",
	"	while (++i < 6)",
	"		ft_putendl(str[i]);",
	"	i = -1;",
	"	while (++i < 40)",
	"		print_array(i);",
	"	i = 5;",
	"	while (++i < 40)",
	"		ft_putendl(str[i]);",
	"	return (0);",
	"}"
};

void	print_array(int i)
{
	ft_putchar(9);
	ft_putchar(34);
	ft_putstr(str[i]);
	ft_putchar(34);
	if (i != 39)
	{
		ft_putchar(',');
		ft_putchar(10);
	}
}

int	main(void)
{
	/*
	**	main
	*/
	int	i;

	i = -1;
	while (++i < 6)
		ft_putendl(str[i]);
	i = -1;
	while (++i < 40)
		print_array(i);
	i = 5;
	while (++i < 40)
		ft_putendl(str[i]);
	return (0);
}
