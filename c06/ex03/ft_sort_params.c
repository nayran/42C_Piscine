/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:59:10 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/17 15:03:39 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;

	if (size == 2)
		return ;
	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[1 + i]) > 0)
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
	ft_sort_int_tab(tab, size - 1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort_int_tab(argv, argc);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
}
