
#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len;
    size_t total;
    char *s1;
    char *s2;

    i = 0;
    len = 0;
    s1 = (char *)dst;
    s2 = (char *)src;

    while (dst[i] != '\0')
    i++;
    total = i;
    while((size - 1 > len) && (s2[len]))
    {
        s1[i] = s2[len];
        i++;
        len++;

    }
    total += len;
    return(total);
}
int main()
{
    char x[] = "uzunca bir metin";
    char y[20] = "başla";

    ft_strlcat(y,x,sizeof(y));

}