/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimusprime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:08:27 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:11 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_optimusprime(char *dest, char *src, int *tam, int buff_size)
{
	int		i;
	int		c;

	i = 0;
	if ((*tam) > buff_size && (*tam) % buff_size == 0)
	{
		if (dest[*tam - buff_size])
			i = *tam - buff_size;
	}
	c = 0;
	while (dest[i])
		i++;
	while (src[c] && c < buff_size)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	while (c >= 0)
	{
		src[c] = '\0';
		c--;
	}
	dest[i] = '\0';
}
