
#include <stdio.h>
#include <stddef.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	i = 0;
	j = 0;
	s1 = (char *)haystack;
	s2 = (char *)needle;

	if (s2 == NULL)
		return (s1);

	while((len > i) && (s1[i] != '\0'))
	{
		j = 0;
		while (s1[i + j] == s2[j] && (len > (i + j)))
		{
			if(s2[j + 1] == '\0')
				return (s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
int main()
{
	char x[] = "mahmutesat";
	char y[] = "mut";
	printf("%s\n", ft_strnstr(x,y,10));
	printf("%s", strnstr(x,y,10));
}
