#include <stdio.h>
#include <unistd.h>


int check_printable(char c)
{
    if ((c >= ' ') && (c <= '~'))
    {
        return (1);
    }
    return (0);
}

int ft_str_is_printable(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_printable(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char str1[] = "Hello, Vienna!";  
    char str2[] = "Hello\teval";   
    char str3[] = "12345";          
    char str4[] = "Hello\nWorld";   

    
    printf("Is \"%s\" printable? %d\n", str1, ft_str_is_printable(str1));
    printf("Is \"%s\" printable? %d\n", str2, ft_str_is_printable(str2));
    printf("Is \"%s\" printable? %d\n", str3, ft_str_is_printable(str3));
    printf("Is \"%s\" printable? %d\n", str4, ft_str_is_printable(str4));

    return 0;
}
