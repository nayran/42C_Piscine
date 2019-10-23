/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jumpline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:23 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 15:18:59 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cria		*ft_jumpline(char *str)
{
	t_cria	*ptr;
	int		i;
	char	*str2;
	int		a;

	ptr = NULL;
	a = ft_strnlen(str);
	if (ft_check_vet(str, a) == 1)
	{
		str2 = (char *)malloc(sizeof(*str2) * 1000);
		ptr = (t_cria *)malloc(sizeof(t_cria) * 1000);
		i = 0;
		str2 = ft_strcut(str, a - 5);
		ptr->altura = ft_atoi(str2);
		ptr->comprimento = a;
		ptr->vazio = str[a - 4];
		ptr->obstaculos = str[a - 3];
		ptr->preenche = str[a - 2];
	}
	return (ptr);
}
