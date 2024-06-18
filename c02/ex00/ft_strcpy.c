#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    unsigned int s;

    s = 0;
    while (src[s] != '\0')
    {
        dest[s] = src[s];
        s++;
    }
    dest[s] = '\0';
    return dest;
}
/*
int main(void)
{
    char src[] = "idk what to write here";
    char dest[150];
    ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/