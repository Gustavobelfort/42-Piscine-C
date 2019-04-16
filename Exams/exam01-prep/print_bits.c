/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:50:47 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/04 23:46:25 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int array[10];
	
	i = 0;
	while (octet > 0)
	{
		array[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	while (i > 0)
	{
		if (array[i - 1] == 0)
			write(1,"0",1);
		if (array[i - 1] == 1)
			write(1,"1",1);
		i--;
	}
}

int main()
{
	print_bits(10);
}
