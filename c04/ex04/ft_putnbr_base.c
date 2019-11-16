/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 00:43:05 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/16 00:43:56 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		dobrado(char c, char *base)
{
	int i;

	i = -1;
	while (*base != '\0' && i < 1)
	{
		if (*base == c)
			i++;
		base++;
	}
	return (i >= 1);
}

void	convert(unsigned int n, char *base, int nbase)
{
	char c;

	if (n / nbase != 0)
		convert(n / nbase, base, nbase);
	c = base[(n % nbase)];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			*aux;
	int				nbase;
	unsigned int	n;

	aux = base;
	nbase = 0;
	while (*aux != '\0')
	{
		if (*aux == '+' || *aux == '-' || dobrado(*aux, aux))
			return ;
		nbase++;
		aux++;
	}
	if (nbase <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	convert(n, base, nbase);
}
