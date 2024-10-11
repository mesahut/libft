
#include "libft.h"
#include <stdio.h>
int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
int main()
{
	printf("%c", ft_tolower('Z'));
}
