/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:04:20 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/13 22:06:22 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		g_mesa[4][4];
int		g_perms[24][6];
int		g_perm_temp[4];
int		g_in[8][2];
int		g_counter;
_Bool	g_erro[2];

int		v_e(int fila[4])
{
	int maior;
	int tamanho;
	int i;

	maior = fila[0];
	tamanho = 1;
	i = 1;
	while (i <= 3)
	{
		if (fila[i] > maior)
		{
			maior = fila[i];
			tamanho++;
		}
		i++;
	}
	return (tamanho);
}

int		v_d(int fila[4])
{
	int maior;
	int tamanho;
	int i;

	maior = fila[3];
	tamanho = 1;
	i = 1;
	while (i <= 3)
	{
		if (fila[3 - i] > maior)
		{
			maior = fila[3 - i];
			tamanho++;
		}
		i++;
	}
	return (tamanho);
}

int		safe_input(char *inp, int i)
{
	while (inp[i] != '\0')
	{
		if ((inp[i] != '1') && (inp[i] != '2') && \
			(inp[i] != '3') && (inp[i] != '4'))
		{
			ft_putchar("Error\n");
			return (1);
		}
		if (inp[++i] != '\0')
		{
			if (inp[i] != ' ')
			{
				ft_putchar("Error\n");
				return (1);
			}
			i++;
		}
	}
	if (i != 31)
	{
		ft_putchar("Error\n");
		return (1);
	}
	return (0);
}

void	charge(char *inp)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 16;
	while (i < 4)
	{
		g_in[i][k] = inp[j] - '0';
		i++;
		j = j + 2;
	}
	k++;
	i = 0;
	while (i < 4)
	{
		g_in[i][k] = inp[j] - '0';
		i++;
		j = j + 2;
	}
	charge2(inp);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		ft_putchar("Error\n");
		return (1);
	}
	i = 0;
	if (safe_input(argv[1], i) == 1)
		return (1);
	charge(argv[1]);
	g_counter = 0;
	perm(0);
	g_erro[0] = 0;
	g_erro[1] = 1;
	table(0);
	print_board();
}
