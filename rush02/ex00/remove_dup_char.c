/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_dup_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:26:14 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 19:46:52 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*remove_dup_char(char *str, char *c)
{
	char	*temp;
	char	*result;

	temp = malloc(sizeof(char) * ft_strlen(str));
	if (*str != *c)
		ft_strncat(temp, str, count_until_char(str, *c));
	while (*str)
	{
		if (*str != *c && *(str - 1) == *c)
		{
			ft_strncat(temp, " ", 1);
			ft_strncat(temp, str, count_until_char(str, *c));
		}
		str++;
	}
	if (*++c)
		result = remove_dup_char(temp, (c + 1));
	else
		result = ft_strdup(temp);
	free(temp);
	return (result);
}
