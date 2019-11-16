/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:26:39 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/20 23:23:58 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (has_error(argv[1]))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
		working(argv[1]);
	return (0);
}
