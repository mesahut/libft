
#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	int i;
	char *a;

	i = 0;
	a = s;
	while((a[i] != '\0') && n > 0)
	{
		a[i] = '\0';
		i++;
		n--;
	}

}

int main()
{
	char x[10] = "mahmur";
	ft_bzero(x,3);
	printf("%c", x[0]);
	printf("%c", x[1]);
	printf("%c", x[2]);
	printf("%c", x[3]);
	printf("%c", x[4]);
	printf("%c", x[5]);



}

