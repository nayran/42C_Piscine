/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resultado.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:09 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 13:19:06 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_resultado(char *str, int start)
{
	int		i;

	i = 0;
	while (str[start + i])
		i++;
	write(1, &str[start], i);
}
