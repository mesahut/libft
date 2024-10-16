/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:57:12 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/15 17:57:13 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	while(i > 0)
	{
		if(s[i] == c)
		return((char *)s + i);
		i--;
	}
	return(0);
}
int main()
{
	char a[10] = "mahmat";
	printf("%s", ft_strrchr(a,'a'));
}