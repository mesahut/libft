
#include <stddef.h>
#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*s;

	s = b;
	a = 0;
	while(a < len)
	{
		s[a] = (char)c;
		a++;
	}
	return(b);
}

int main()
{
	char i[20];
	 printf("%s\n", ft_memset(i,'2',7));
	 printf("%s" ,memset(i,'2',7));
}
