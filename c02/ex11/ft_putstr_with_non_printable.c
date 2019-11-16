char *ft_putstr_with_non_printable(char *str)
{
    *str = *str - 32;
    while(*str != '\0')
    {
        if((*str == ' ') || (*str == '-') || (*str == '+'))
        {
            str++;
            if(( *str > 96) && (*str < 123))
            {
                *str = *str - 32;
            }
        }
        str++;
    }
    return str;
}