/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:15:47 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/04 22:50:36 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int positions;
	int i;

	i = 0;
	positions = 0;
	if (argc != 4)
	{
		char new_line = '\n';
		write(1, &new_line, 1);
		return (0);
	}
	else
	{
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			write(1, &argv[3][0], 1);
		}
		else
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}		
	char new_line = '\n';
	write(1, &new_line, 1);
	}
}
