/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavi <mdavi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:34:24 by mdavi             #+#    #+#             */
/*   Updated: 2019/10/20 23:09:28 by mdavi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write(1, &str[cont], 1);
		cont++;
	}
}
