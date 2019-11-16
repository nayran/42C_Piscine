/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:43:14 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/22 02:23:13 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int cont;

	cont = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		cont = cont * nb;
		power--;
	}
	return (cont);
}
