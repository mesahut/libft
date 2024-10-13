
#include <stdio.h>
#include <string.h>
#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;

	if (!s1 && !s2)
		return (0);
	if(s1 > s2)
	{
		s1[i] += len-1;
		s2[i]+= len-1;
		while (len > i)
		{
			s1[i--] = s2[i];
		}
	}
	else
	while (len > i)
	{
		s1[i++] = s2[i];
	}
	return (dst);
}

int main()
{
	char x[] = "abcdefghjkl";
	char y[] = "abcdefghjkl";

	printf("%s\n" ,memmove(y,y+3,3));
	printf("%s" ,ft_memmove(x,x+3,3));


}
