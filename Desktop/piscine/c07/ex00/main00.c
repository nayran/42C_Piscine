/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:21:17 by nfranco-          #+#    #+#             */
/*   Updated: 2019/10/22 10:24:31 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *str = "Nathalie";

	str = ft_strdup(str);
	printf("res %s\n", str);
	free(str);
}
