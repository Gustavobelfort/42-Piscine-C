/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:58:45 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/05 16:08:16 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int count;
	char *new_word;

	count = 0;
	while (src[count++])
		;
	new_word = (char *)malloc(sizeof(char) * (count + 1));
	new_word = src;

	return (new_word);
}

int main()
{
	printf("%s", ft_strdup("test"));
}
