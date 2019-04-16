#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	w_count(char *string)
{
	int count = 0;
	int i = 0;

	while (string[i])
	{
		while ((string[i] == ' ' || string[i] == '\t') && string[i])
			i++;
		while (string[i] != ' ' && string[i] != '\t' && string[i])
			i++;
		while ((string[i] == ' ' || string[i] == '\t') && string[i])
			i++;
		count++;
	}
	return (count);
}

int l_word(char *string, int i)
{
	int count = 0;

	while (string[i] != '\0' && string[i] != '\t' && string[i] != ' ')
	{
		count++;
		i++;
	}
	return (count);
}

void ft_putrev(char **words, int w_num)
{
	int i;

	while (w_num > 0)
	{
		i = 0;
		while (words[w_num - 1][i])
		{
			write(1, &words[w_num - 1][i],1);
			i++;
		}
		w_num--;
		if (w_num > 0)
			write(1," ",1);
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	char **words = malloc(sizeof(char*) * (w_count(argv[1]) + 1));
	while (argv[1][i])
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if (argv[1][i])
		{
			k = 0;
			words[j] = malloc(sizeof(char)*(l_word(argv[1], i) + 1));
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
				words[j][k++] = argv[1][i++];
			words[j++][k] = '\0';
		}
	}
	ft_putrev(words, w_count(argv[1]));
}
