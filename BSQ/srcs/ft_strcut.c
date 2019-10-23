/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:41:05 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 14:43:29 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char		*ft_strcut(char *str, int n)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc(sizeof(*cpy) * (n));
	while (i <= n)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
