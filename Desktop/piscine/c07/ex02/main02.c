/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:32:20 by nfranco-          #+#    #+#             */
/*   Updated: 2019/10/22 10:35:45 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int x = 0;
	int *y = &x;
	int **tb = &y;
	int size;

	size = ft_ultimate_range(tb, 2, 7);
	printf("tab %d\n", size);
}
