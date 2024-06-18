#include <stdio.h>
#include <unistd.h>


char *ft_strupcase(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str1[] = "rAndOm lEtTerS!";  
    
    printf("Original: \"%s\" -> Uppercase: \"%s\"\n", str1, ft_strupcase(str1));
  
    return 0;
}
