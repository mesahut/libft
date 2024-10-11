
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
