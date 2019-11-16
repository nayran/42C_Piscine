/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:22:55 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 23:24:25 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define DICTIONARY_PATH "./numbers.dict"

typedef struct	s_dictionary
{
	char *key;
	char *value;
}				t_dictionary;

void			working(char *str);
int				has_error(char *argv);
char			*read_input();
int				has_a_file(char *path);
void			ft_putstr(char *str);
int				ft_str_isnum(char *str);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strdup(char *src);
int				guri(t_dictionary **dict, char *number);
char			*load_file(char *path);
int				ft_strlen(char *str);
int				conta_blocos(char *c);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*remove_dup_char(char *str, char *c);
void			ft_rev_char_tab(char *tab, int size);
int				count_char(char *str, char c);
int				count_until_char(char *str, char c);
int				ft_atoi(char *str);
char			*ft_strdivision(char *c);
t_dictionary	*line_to_dictionary(char *str);
t_dictionary	**str_to_dictionary(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*generate_number(int nb);
void			implicit_algorithm(t_dictionary **dict, char *str);

#endif
