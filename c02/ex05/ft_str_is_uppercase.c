#include <stdio.h>
#include <unistd.h>

// Function to check if a character is uppercase
int check_upper(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

// Function to check if a string contains only uppercase characters
int ft_str_is_uppercase(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_upper(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char str1[] = "HELLO";    // Uppercase string
    char str2[] = "Hello";    // Mixed case string
    char str3[] = "WORLD";    // Uppercase string

    // Check if the strings are uppercase and print the result
    printf("Is \"%s\" uppercase? %d\n", str1, ft_str_is_uppercase(str1));
    printf("Is \"%s\" uppercase? %d\n", str2, ft_str_is_uppercase(str2));
    printf("Is \"%s\" uppercase? %d\n", str3, ft_str_is_uppercase(str3));

    return 0;
}
