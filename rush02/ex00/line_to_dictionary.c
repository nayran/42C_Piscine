/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_to_dictionary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:20:58 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 23:18:46 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char			*get_key(char *str)
{
	int		c;
	char	*result;

	c = 0;
	while ('0' <= str[c] && str[c] <= '9')
		c++;
	result = malloc(sizeof(char) * (c + 1));
	ft_strncpy(result, str, c + 1);
	result[sizeof(char) * (c)] = 0;
	return (result);
}

t_dictionary	*line_to_dictionary(char *str)
{
	char			*value;
	t_dictionary	*p;

	p = malloc(sizeof(t_dictionary));
	while (*str == ' ')
		str++;
	p->key = get_key(str);
	while ('0' <= *str && *str <= '9')
		str++;
	while (*str == ' ')
		str++;
	while (*str == ':')
		str++;
	while (*str == ' ')
		str++;
	value = malloc(sizeof(char) * count_until_char(str, '\n') + 1);
	ft_strncpy(value, str, count_until_char(str, '\n'));
	value[sizeof(char) * count_until_char(str, '\n')] = 0;
	p->value = value;
	return (p);
}
