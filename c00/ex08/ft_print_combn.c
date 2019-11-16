/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:48:22 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/07 10:54:19 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_comb2(int n)
{
	int a;
	int x[10];
	int n2;
	int aux;
	aux = 10;
	n2 = 0;
	int aux2;
	
	while (n > n2)
	{
		a = 0;
		while (a < 10)
		{
			if (n2 <= a)
			{
				if(aux >= n && x[aux] != x[aux+1])
				{
					if()
					aux2 = aux++;
					x[aux] = (a % 10 + 48);
					write(1, &x[aux], 1);
					aux--;
					
				}	
			}
			a++;
		}
		write(1, "\n", 1);
		n2++;
	}
	return (0);
}

int main ()
{
	ft_print_comb2(5);
}