/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 04:10:37 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 20:04:18 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*generate_number(int nb)
{
	char *number;

	number = malloc(sizeof(char) * (nb + 1));
	ft_strncat(number, "1", 1);
	while (nb-- > 0)
		ft_strncat(number, "0", 1);
	return (number);
}
