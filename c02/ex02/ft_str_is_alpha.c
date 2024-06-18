#include <stdio.h>

int check_alpha(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (1);
    }
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

int ft_str_is_alpha(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_alpha(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char str1[] = "HelloWorld";    
    char str2[] = "Hello World!";  
    char str3[] = "123ABC";        

     printf("Is \"%s\" alphabetic? %d\n", str1, ft_str_is_alpha(str1));
    printf("Is \"%s\" alphabetic? %d\n", str2, ft_str_is_alpha(str2));
    printf("Is \"%s\" alphabetic? %d\n", str3, ft_str_is_alpha(str3));

    return 0;
}
