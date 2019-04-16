/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:36:58 by gbelfort          #+#    #+#             */
/*   Updated: 2019/03/31 17:03:13 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(int star_number)
{
	ft_putchar('/');
	while (star_number)
	{
		ft_putchar('*');
		star_number--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_putfloor(int floor)
{	
	int i;
	int star_number;

	// number of lines
	i = 2 + floor;
	star_number = 1;
	while (i)
	{
		ft_putline(star_number);
		star_number += 2;
		i--;
	}

}

void	sastantua(int floor_number)
{
	int i;

	i = 1;
	while (i < floor_number)
	{
		ft_putfloor(i);
		i++;
	}
}

int main()
{
	sastantua(3);
	return (0);
}
