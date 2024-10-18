/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:54 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/17 19:52:08 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*s;

	s = (char *)b;
	a = 0;
	while (a < len)
	{
		s[a] = (char)c;
		a++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char	dest[5]= "ajc";
	printf("%s\n", ft_memset(dest,97, 10));
	printf("\n\n");
	printf("%s", memset(dest,65, 5));
}*/	
