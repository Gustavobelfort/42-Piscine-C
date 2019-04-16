/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:43:16 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/05 15:57:59 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	unsigned int number;
	int signal = 1;

	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;

	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		signal = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + ((*str - '0') % 10);
		str++;
	}
	
	return (number * -1);
}

int main()
{
	printf("%d", ft_atoi("    \n\n\v\f\r\t -5234AAAgreghrsth"));
}
