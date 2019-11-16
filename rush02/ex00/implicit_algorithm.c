/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implicit_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:22:46 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/20 23:22:52 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*get_number_value(t_dictionary **dict, char *nb)
{
	int index;

	index = 0;
	while (ft_strcmp(dict[index]->key, "-1") != 0)
	{
		if (ft_strcmp(dict[index]->key, nb) == 0)
			break ;
		index++;
	}
	return (dict[index]->value);
}

void	guri2(t_dictionary **dict, char *number)
{
	char c[4];

	c[1] = 0;
	if (ft_strlen(number) == 2 && *number == '0')
		number++;
	else if (ft_strlen(number) == 2)
	{
		c[0] = *number++;
		c[1] = '0';
		c[2] = 0;
		ft_putstr(get_number_value(dict, c));
		ft_putstr("-");
	}
	if (*number != '0')
	{
		c[0] = *number;
		c[1] = 0;
		ft_putstr(get_number_value(dict, c));
	}
}

int		guri(t_dictionary **dict, char *number)
{
	char c[4];

	c[1] = 0;
	if (ft_strlen(number) == 3)
	{
		c[0] = *number++;
		ft_putstr(get_number_value(dict, c));
		ft_putstr(" ");
		ft_putstr(get_number_value(dict, "100"));
		if (count_char(number, '0') != ft_strlen(number))
			ft_putstr(" and ");
	}
	if (ft_strcmp(get_number_value(dict, &number[0]), "end") != 0)
		ft_putstr(get_number_value(dict, &number[0]));
	else
	{
		guri2(dict, number);
	}
	return (0);
}

void	implicit_algorithm(t_dictionary **dict, char *str)
{
	char	number[4];
	int		size;

	number[0] = '\0';
	number[1] = '\0';
	number[2] = '\0';
	number[3] = '\0';
	while (*str == '0')
		str++;
	size = ft_strlen(str) % 3;
	size = (size > 0) ? size : 3;
	ft_strncpy(number, str, size);
	guri(dict, number);
	str = str + size;
	if (ft_strlen(str) >= 3)
	{
		ft_putstr(" ");
		guri(dict, generate_number(ft_strlen(str)));
	}
	if (ft_strlen(str) && ft_strlen(str) != count_char(str, '0'))
	{
		ft_putstr(", ");
		implicit_algorithm(dict, str);
	}
}
