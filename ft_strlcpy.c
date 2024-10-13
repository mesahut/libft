#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t len;
    char    *s1;
    char    *s2;

    i = 0;
    s1 = (char *)dst;
    s2 = (char *)src;
    len = 0;
    while (src[len] != '\0')
    len++;

    while((src[i] != '\0') && (size - 1 > i))
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (len);
}
int main()
{
    char x[] = "merba";
    char y[] = "kar";
    ft_strlcpy(x,y,sizeof(x));
}
