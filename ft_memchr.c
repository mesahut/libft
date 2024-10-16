/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:44 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/15 18:14:22 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while ((a[i] != '\0') && n > 0)
	{
		if (a[i] == (unsigned char)c)
			return (a + i);
		i++;
		n--;
	}
	return (NULL);
}

int main()
{
    char x[] = "mahmuesataas";
    printf("%s\n", ft_memchr(x,'t', strlen(x)));
    printf("%s", memchr(x,'t',strlen(x)));
}
