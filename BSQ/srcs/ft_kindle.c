/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kindle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:23:08 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:15:18 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_kindle(int fd, int buff_size)
{
	char	buff[buff_size + 1];
	char	*str;
	char	*temp;
	int		size;

	size = 0;
	str = (char*)malloc(sizeof(*str) * (size + 1));
	temp = (char*)malloc(sizeof(*str) * (size + 1));
	str[0] = 0;
	temp[0] = 0;
	while (read(fd, buff, buff_size) && str && temp && size >= 0)
	{
		size += buff_size;
		ft_strcpy(temp, str);
		free(str);
		str = (char*)malloc(sizeof(*str) * (size + 1));
		ft_strcpy(str, temp);
		ft_optimusprime(str, buff, &size, buff_size);
		str[size] = '\0';
		free(temp);
		temp = (char*)malloc(sizeof(*temp) * (size + 1));
		ft_buzzlightyear(&size, str, buff_size);
	}
	free(temp);
	return (str);
}
