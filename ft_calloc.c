#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
void *calloc(size_t nmemb, size_t size)
{
    size_t i;
    size_t byte;
    void *x;

    i = 0;
    byte = nmemb * size;
    x = malloc(byte);
    if ((nmemb == 0) && (size == 0))
        return (0);

    while(byte > i)
    {
        x[i] = 0;
    }
    return (x);

}