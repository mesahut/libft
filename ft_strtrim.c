/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:17:51 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/18 14:19:18 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_find(const char *s1, const char *set, int c)
{
	int	i;

	i = 0;
	if (c == 0)
	{
		while (set)
		{
			while (s1[c] == set[i])
				c++;
			i++;
		}
	}
	else
	{
		while (set)
		{
			while (s1[c] == set[i])
				c--;
			i++;
		}
	}
	return (c);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     a;
	int		b;
    char    *dst;

    i = 0;
    a = ft_find(s1, set, 0);
	b = ft_find(s1, set, ft_strlen(s1));
	dst = malloc(((b - a) * sizeof(char)) + 1);
	if (!dst)
		return (0);
	while(a < b)
	{
		dst[i] = s1[i + a];
		a++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
