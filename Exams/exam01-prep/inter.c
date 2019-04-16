/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:20:10 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/05 16:34:05 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
	{
		write(1,"\n", 1);
		return (0);
	}
	else
	{
		while (argv[i])
		{
			while (argv[i + 1])
			{
				if (argv[i + 1] == argv[i])
				{
					write(1, &argv[i + 1], 1)
					break;
				}
				i++;
			}
		}
		write(1,"\n", 1);
	}
}
