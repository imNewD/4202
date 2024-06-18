#include <stdio.h>

int check_numeric(char c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return (1);
    }
    return (0);
}


int ft_str_is_numeric(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_numeric(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char str1[] = "1234567890";   
    char str2[] = "12345abc678";   
    char str3[] = "9876543210";    

    
    printf("Is \"%s\" numeric? %d\n", str1, ft_str_is_numeric(str1));
    printf("Is \"%s\" numeric? %d\n", str2, ft_str_is_numeric(str2));
    printf("Is \"%s\" numeric? %d\n", str3, ft_str_is_numeric(str3));

    return 0;
}
