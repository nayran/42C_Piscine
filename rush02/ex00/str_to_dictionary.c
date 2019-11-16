/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_dictionary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:32:57 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 23:18:29 by mdavi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dictionary	**str_to_dictionary(char *str)
{
	int					size;
	int					index;
	t_dictionary		**result;
	t_dictionary		*last;

	size = count_char(str, '\n');
	index = 0;
	result = malloc(sizeof(t_dictionary) * size + 1);
	while (*str)
	{
		result[index++] = line_to_dictionary(str);
		str = str + count_until_char(str, '\n') + 1;
	}
	last = malloc(sizeof(t_dictionary));
	last->key = ft_strdup("-1");
	last->value = ft_strdup("end");
	result[index] = last;
	return (result);
}
