/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:47 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/16 01:56:14 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)s1;
	b = (char *)s2;
	while ((a[i] == b[i]) && (n > 0))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (a[i] - b[i]);
}
