#include <unistd.h>

int ft_atoi(char *str)
{
	int signal = 1;
	int i = 0;
	int res = 0;

	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void ft_putstr(char *s)
{
	int i = 0;
	while(s[i++])
	{
		write(1,&s[i],1);
	}
}

int main(int argc, char **argv)
{
	char v;
	if (argc > 2)
	{
		int i = 1;
		while (i <= 9)
		{
			v = i + '0';
			write(1, &v ,1);
			ft_putstr(" x ");	
			write(1, &argv[1] ,1);
			ft_putstr(" = ");	
			v = ft_atoi(argv[1]) * i;
			write(1, &v ,1);
		}
	}
	else
	{
		write(1,"\n",1);
	}
}
