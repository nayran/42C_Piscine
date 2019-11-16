/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mesas.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:03:43 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/13 22:46:52 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	print_board(void)
{
	int		k;
	int		l;
	char	c;

	k = 0;
	if (!g_erro[1])
	{
		while (k <= 3)
		{
			l = 0;
			while (l <= 3)
			{
				c = '0' + g_mesa[k][l];
				write(1, &c, 1);
				l++;
				if (l != 4)
					write(1, " ", 1);
			}
			ft_putchar("\n");
			k++;
		}
	}
	else
		ft_putchar("Error\n");
}

void	checkcoluna(void)
{
	int		f[4];
	_Bool	achou;
	int		l;
	int		k;

	achou = 1;
	k = 0;
	while (k <= 3 && achou)
	{
		l = 0;
		while (l <= 3)
		{
			f[l] = g_mesa[l][k];
			l = l + 1;
		}
		if (!(v_e(f) == g_in[4 + k][0] && v_d(f) == g_in[4 + k][1] && isp(f)))
		{
			achou = 0;
		}
		k++;
	}
	if (achou)
	{
		g_erro[1] = 0;
	}
}

void	addtotable(int k, int n)
{
	int l;
	int erro;

	l = 0;
	erro = 0;
	while (l <= 3)
	{
		g_mesa[n][l] = g_perms[k][l];
		l++;
	}
}

int		table(int n)
{
	int		k;
	_Bool	erro;

	if (n == 4)
		checkcoluna();
	else
	{
		erro = 1;
		k = 0;
		while (k <= 23 && g_erro[1])
		{
			if (g_perms[k][4] == g_in[n][0] && g_perms[k][5] == g_in[n][1])
			{
				addtotable(k, n);
				table(n + 1);
			}
			k++;
		}
		if (erro && g_erro[1])
			g_erro[0] = 1;
	}
	return (0);
}

void	ft_putchar(char *w)
{
	int i;

	i = 0;
	while (w[i] != '\0')
	{
		write(1, &w[i], 1);
		i++;
	}
}
