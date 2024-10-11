
#include <string.h>
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	char *a1;
	char *a2;

	i = 0;
	a1 = (char *)s1;
	a2 = (char *)s2;
	while ((a1[i] == a2[i]) && (n - 1 > 0) && (a1[i] != '\0'))
	{
	i++;
	n--;
	}
	return(a1[i] - a2[i]);
}

int main()
{
	char se[] = "mEhmut";
	char sa[] = "mehmet";
	printf("%d\n", ft_strncmp(se,sa,4));
	printf("%d", strncmp(se,sa,4));
}
