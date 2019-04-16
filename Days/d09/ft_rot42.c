/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:10:26 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/05 13:30:18 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_rot42(char *str)
{
	char *new_string;

	new_string = str;
	while (*new_string)
	{
		if(*new_string >='A' && *new_string <='Z')
		{
			if ((*new_string + 42 <= 'Z'))
				*new_string += 42;
			else
				*new_string -= 42;
		}
		else if (*new_string >= 'a' && *new_string <= 'z')
		{
			if (*new_string + 42 < 'z')
				*new_string += 42;
			else
				*new_string -= 42;
		}
	}
	return (new_string);

}
