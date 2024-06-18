#include <stdio.h>
#include <unistd.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int count;

    i = 0;
    count = 0;
    while (src[count])
        count++;
    if (size < 1)
        return (count);
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (count);
}

int main(void)
{
    char src[] = "Hello, world!";
    char dest1[20];
    char dest2[6];
    unsigned int len1, len2;

    len1 = ft_strlcpy(dest1, src, sizeof(dest1));
    len2 = ft_strlcpy(dest2, src, sizeof(dest2));

    printf("Source: \"%s\"\n", src);
    printf("Destination 1 (size 20): \"%s\", Length: %u\n", dest1, len1);
    printf("Destination 2 (size 6): \"%s\", Length: %u\n", dest2, len2);

    return 0;
}
