/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:04:03 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/13 22:07:18 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	save_perm(void)
{
	int k;

	k = 0;
	while (k <= 3)
	{
		g_perms[g_counter][k] = g_perm_temp[k];
		k++;
	}
	g_perms[g_counter][4] = v_e(g_perm_temp);
	g_perms[g_counter][5] = v_d(g_perm_temp);
	g_counter++;
}

void	perm2(int i, int n)
{
	int erro;
	int k;

	k = 0;
	erro = 1;
	while (k <= (n - 1))
	{
		erro = erro && i != g_perm_temp[k];
		k++;
	}
	if (erro)
	{
		g_perm_temp[n] = i;
		perm(n + 1);
	}
}

void	perm(int n)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (n == 4)
	{
		k = 0;
		save_perm();
	}
	else
	{
		i = 1;
		while (i <= 4)
		{
			perm2(i, n);
			i++;
		}
	}
}

_Bool	isp(int fila[4])
{
	int k;
	int l;

	k = 0;
	l = 0;
	while (k <= 3)
	{
		l = 0;
		while (l <= k - 1)
		{
			if (fila[l] == fila[k])
			{
				return (0);
			}
			l++;
		}
		k++;
	}
	return (1);
}

void	charge2(char *inp)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 4;
	k = 0;
	while (i < 8)
	{
		g_in[i][k] = inp[j] - '0';
		i++;
		j = j + 2;
	}
	k++;
	i = 4;
	while (i < 8)
	{
		g_in[i][k] = inp[j] - '0';
		i++;
		j = j + 2;
	}
}
