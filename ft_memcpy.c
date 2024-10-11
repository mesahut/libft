
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;

	if(s1 == NULL && s2 == NULL)
	return (0);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return(dst);
}

int main()
{
	char a[] = "";
	char b[] = " ";

	printf("%s\n" , ft_memcpy(b,a,8));
	printf("%s" , memcpy(b,a,8));

}

