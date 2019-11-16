/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:06:35 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/13 22:07:04 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		v_e(int fila[4]);
int		v_d(int fila[4]);
void	print_board(void);
void	checkcoluna(void);
void	addtotable(int k, int n);
int		table(int n);
void	perm(int n);
void	perm2(int i, int n);
void	save_perm(void);
_Bool	isp(int fila[4]);
void	charge2(char *inp);
void	ft_putchar(char *w);

extern	_Bool	g_erro[2];
extern	int	g_mesa[4][4];
extern	int	g_perms[24][6];
extern	int	g_perm_temp[4];
extern	int	g_in[8][2];
extern	int	g_counter;

#endif
