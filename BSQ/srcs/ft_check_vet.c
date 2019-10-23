/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_vet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:16:37 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 15:19:07 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_check_vet(char *str, int a)
{
	int i;
	int b;

	i = 0;
	b = a - 5;
	if (a < 5)
		return (0);
	if ((str[a - 3] == str[a - 2]) || (str[a - 2] == str[a - 4]))
		return (0);
	else if (str[a - 4] == str[a - 3])
		return (0);
	if (b == 0 && str[0] <= 57 && str[0] >= 48)
		return (1);
	while (i <= b)
	{
		if (str[i] > 57 || str[i] < 48)
			return (0);
		i++;
	}
	return (1);
}
