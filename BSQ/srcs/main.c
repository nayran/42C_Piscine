/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:29:25 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:05 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	int		fd;

	str = NULL;
	i = 0;

	if (argc != 1)
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd > 0)
			{
				str = ft_kindle(fd, BUFFER2);
				ft_init(str);
				close(fd);
			}
			else
				ft_putstr("map error\n");
		}
	else
	{
		str = ft_kindle(0, BUFFER1);
		ft_init(str);
	}
	return (0);
}
