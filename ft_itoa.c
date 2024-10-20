/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:16:14 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/10/20 18:46:27 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
static int  ft_count(int c, int i)
{
    int b;

    b = 0;
    if (c < 0)
    i = 1;
    while (c != 0)
    {
        c = c / 10;
        b++;
    }
    return (b);
} 
char *ft_itoa(int n)
{
    int b;
    int i;
    int num;
    char *s1;

    num = n;
    i = 0;
    b = ft_count(n ,&i);
    s1 = (char *)malloc((b + 1) * sizeof(char));
    if (!s1)
        return(0);
    if (i == 1)
        s1[0] = '-'; 
    s1[b] = '\0';
    b--;
    while (i < b)
    {
        num = n % 10;
        n = n / 10;
        s1[i] = num + 48;
        i++;;
    }
    return (s1);
}
