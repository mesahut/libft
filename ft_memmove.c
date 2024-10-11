
#include <stdio.h>
#include <string.h>
#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	size_t j;
	char *s1;
	char *s2;

	i = 0;
	j = 0;
	s1 = (char *)dst;
	s1 = (char *)src;

	if (!s1 && !s2)
		return (0);
	if(s1 - s2 > 0)
	{
		s1[i] += len-1;
		s2[i]+= len-1;
		while (len > 0)
		{
			s1[i] = s2[i];
			i--;
			len--;
		}
	}
	else
	while (len > 0)
	{
		s1[i] = s2[i];
		i++;
		len--;
	}
	return (dst);
}

int main()
{
	char x[] = "mahmuteeee";

	//printf("%s\n" ,memmove(x,x+3,3));
	printf("%s" ,ft_memmove(x,x+3,3));


}
