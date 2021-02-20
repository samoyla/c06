#include <unistd.h>

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
		write(1, str, 1);
	}	
	write(1, '\n', 1);
}

int	main(int argc, char **argv)
{
	int n;
	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		n--;
	}
	return (0);
}
