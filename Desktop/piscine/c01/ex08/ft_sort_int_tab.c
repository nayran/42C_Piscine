/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:18:42 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/08 18:49:54 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int size2;
	int l;

	size2 = 0;
	while (size2 < size)
	{
		if (tab[size2] > tab[size2 + 1])
		{
			l = tab[size2];
			tab[size2] = tab[size2 + 1];
			tab[size2 + 1] = l;
			size2 = 0;
		}
		else
		{
			size2++;
		}
	}
}
