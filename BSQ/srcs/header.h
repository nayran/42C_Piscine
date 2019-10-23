/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:43 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:36:02 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

#define BUFFER1 1000000
#define BUFFER2 8000000

typedef struct		s_cria
{
	int		altura;
	int		comprimento;
	int		largura;
	char	vazio;
	char	obstaculos;
	char	preenche;
}					t_cria;

typedef struct		s_salva
{
	int		x;
	int		y;
	int		max;
}					t_salva;

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
void				ft_strcpy(char *dest, char *str);
t_cria				*ft_jumpline(char *str);
int					ft_strnlen(char *str);
char				*ft_strcut(char *str, int n);
void				ft_preenche(t_salva *record, char *str, t_cria *info);
void				ft_cacetinho(t_cria *info, char *str, t_salva *record);
void				ft_resultado(char *str, int init);
int					ft_largura(char *str, t_cria info, int width);
void				ft_init(char *str);
int					ft_pos_check(char *str, t_cria *info, int position[2], int tam);
int					ft_quadrado(char *str, int position[2], t_cria *info, int tam);
t_salva				*tabuleiro(void);
void				ft_optimusprime(char *dest, char *src, int *tam, int buff_size);
int					ft_big_kiko(char *str, int pos[2], t_cria *info, int tam);
int					ft_check_vet(char *str, int a);
void				ft_buzzlightyear(int *tam, char *str, int buf);
char				*ft_kindle(int fd, int buff_size);

#endif
