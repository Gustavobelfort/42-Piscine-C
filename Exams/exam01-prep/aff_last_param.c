#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
			ft_putstr(argv[argc - 1]);
			write(1, "\n", 1);
	}
}
