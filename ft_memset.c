/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:54 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/15 18:22:32 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*s;

	s = b;
	a = 0;
	while (a < len)
	{
		s[a] = (char)c;
		a++;
	}
	return (b);
}

int main()
{
	char i[20];
	 printf("%s\n", ft_memset(i,'2',7));
	 printf("%s" ,memset(i,'2',7));
}
