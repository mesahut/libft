
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *a;
	char *b;

	i = 0;
	a = (char *)s1;
	b = (char *)s2;

	while ((a[i] == b[i]) && (n > 0))
	{
		i++;
		n--;
	}
	if (n == 0)
	return (0);
	return (a[i] - b[i]);


}

int main()
{
    char x[10] = "mahmur";
    char y[] = "mahmut";

    printf("%d\n", ft_memcmp(x,y,6));
    printf("%d", memcmp(x,y,6));

}
