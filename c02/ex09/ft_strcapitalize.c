#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    unsigned int i;
    char c;
    int update;

    i = 0;
    update = 1;
    while (str[i] != '\0')
    {
        c = str[i];
        if (update == 1 && c >= 'a' && c <= 'z')
            str[i] = str[i] - 32;
        else if (update == 0 && c >= 'A' && c <= 'Z')
            str[i] = str[i] + 32;
        if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
            update = 1;
        else
            update = 0;
        i++;
    }
    return (str);
}

int main(void)
{
    char str1[] = "hello, world! 42foo Bar-Baz.";
    char str2[] = "HELLO, school AND CLASSMATES! 42FOO BAR-BAZ.";
    char str3[] = "guten TAG VIena! 42foo Bar-baz.";
    char str4[] = "12345";

    // Capitalize words and print the result
    printf("Original: \"%s\" -> Capitalized: \"%s\"\n", str1, ft_strcapitalize(str1));
    printf("Original: \"%s\" -> Capitalized: \"%s\"\n", str2, ft_strcapitalize(str2));
    printf("Original: \"%s\" -> Capitalized: \"%s\"\n", str3, ft_strcapitalize(str3));
    printf("Original: \"%s\" -> Capitalized: \"%s\"\n", str4, ft_strcapitalize(str4));

    return 0;
}
