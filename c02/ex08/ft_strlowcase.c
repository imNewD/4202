#include <stdio.h>
#include <unistd.h>

// Function to convert uppercase letters in a string to lowercase
char *ft_strlowcase(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str1[] = "mIxiIxn LEttErS!";  
   
    // Convert strings to lowercase and print the result
    printf("Original: \"%s\" -> Lowercase: \"%s\"\n", str1, ft_strlowcase(str1));
  
    return 0;
}
