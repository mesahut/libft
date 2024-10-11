
#include <stdio.h>
#include <xlocale.h>
#include <stdlib.h>
int	ft_negative(char *a1, int *sw)
{
	int	j;
	int	ops;

	j = 0;
	ops = 1;
	while ((a1[j] >= 9 && a1[j] <= 13) || a1[j] == 32)
	{
		j++;
	}
	if(a1[j] == 45 || a1[j] == 43)
	{
		if (a1[j] == 45)
			ops *= -1;
		j++;
	}
	*sw = j;
	return (ops);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	negative;
	char *s1;
	s1 = (char *)str;

	number = 0;
	negative = ft_negative(s1, &i);
	while (s1[i] >= 48 && s1[i] <= 57)
	{
		number *= 10;
		number += s1[i] - 48;
		i++;
	}
	number *= negative;
	return (number);
}
int main()
{
	char a[] = "42";
	printf("%d\n", ft_atoi(a));
	printf("%d", atoi(a));
}

