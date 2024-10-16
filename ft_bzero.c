/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:21 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/15 18:03:00 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*a;

	i = 0;
	a = s;
	while ((a[i] != '\0') && n > 0)
	{
		a[i] = '\0';
		i++;
		n--;
	}
}

int main()
{
	char x[10] = "mahmur";
	ft_bzero(x,3);
	printf("%c", x[0]);
	printf("%c", x[1]);
	printf("%c", x[2]);
	printf("%c", x[3]);
	printf("%c", x[4]);
	printf("%c", x[5]);



}

