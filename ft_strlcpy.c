/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:57:01 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/24 12:34:51 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while ((src[i] != '\0') && (size - 1 > i))
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (len);
}
