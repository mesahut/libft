
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *a;
    int i;

    i = 0;
    a = (char *)s;

    while ((a[i] != '\0') && n > 0)
    {
        if(a[i] == (unsigned char)c)
        {
            return(a + i);
        }
        i++;
        n--;
    }
    return (NULL);
}

int main()
{
    char x[] = "mahmuesataas";
    printf("%s\n", ft_memchr(x,'t', strlen(x)));
    printf("%s", memchr(x,'t',strlen(x)));
}
