/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:53:33 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/09 05:11:50 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int store;

	i = 0;
	while (i != size / 2)
	{
		store = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = store;
		i++;
	}
}