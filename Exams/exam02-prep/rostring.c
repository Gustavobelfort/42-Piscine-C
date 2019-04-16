#include <unistd.h>
#include <stdlib.h>

#define is_space(c) ((c) == ' ' || (c) == '\t')

int ft_len(char *ini)
{
	char *end;
	end = ini;
	while (*end)
		end++;
	return (end-ini);
}

void rostring(char *v)
{
	int i = 0;
	int c_word = -1;
	int fw_begin, fw_end;

	while(v[i])
	{
		if (!is_space(v[i]))
		{
			fw_begin = i;
			while (!is_space(v[i]) && v[i])
				++i;
			fw_end = i;
			break ;
		}
		++i;
	}
	while(v[i])
	{
		if (!is_space(v[i]))
		{
			if (c_word != -1)
				write(1, " ", 1);
			c_word = i;
			while (!is_space(v[i]) && v[i])
				++i;
			write(1, &v[c_word] , (i - c_word));
			continue ;
		}
		++i;
	}

	if (c_word != -1)
		write(1, " ", 1);
	write(1, &v[fw_begin], fw_end - fw_begin);

}

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
	{
		rostring(argv[1]);
		return 0;
	}
}
