/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:28:14 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/18 01:59:48 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*sb;

	i = 0;
	l = ft_strlen(s);
	sb = malloc ((len * sizeof(char)) + 1);
	if (start >= l)
		len = 0;
	if (!sb)
		return (0);
	while (s[i + start] && len > 0)
	{
		sb[i] = s[i + start];
		i++;
		len--;
	}
	sb[i] = '\0';
	return (sb);
}
