#include "ft_ctype.h"

char *ft_strcapitalize(char *str)
{
    int flag = 0;
    char *str_copy = str;

    while (*str)
    {
        if (ft_isalnum(*str) && flag == 0)
        {
            flag = 1;
		    if (ft_islower(*str))
                *str = ft_toupper(*str);
        }
        flag = !(ft_ispunct(*str) || ft_isspace(*str));
		++str;
    }
    return (str_copy);
}