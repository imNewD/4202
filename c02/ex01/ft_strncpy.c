#include <stdio.h>


char *ft_strncpy(char *dest, char *src, unsigned int s)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < s)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < s)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
    char src[] = "Not.large.enough.destination";
    char dest[200];
    unsigned int s = 10;

    ft_strncpy(dest, src, s);

    printf("Source: %s\n", src);
    printf("Destination (first %u characters): %s\n", s, dest);

    return 0;
}
