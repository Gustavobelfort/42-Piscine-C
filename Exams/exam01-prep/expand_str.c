#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i]  == ' '|| argv[1][i] == '\t')
		i++;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
			counter = 1;
		else if (argv[1][i] != ' ' || argv[1][i] != '\t')
		{
			if (counter)
				write(1, "   ", 3);
			counter = 0;
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
