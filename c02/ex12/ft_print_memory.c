char *ft_print_memory(char *str)
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