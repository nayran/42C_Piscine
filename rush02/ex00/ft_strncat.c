/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:13:11 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 04:15:57 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *r;

	r = dest;
	while (*dest != '\0')
		dest++;
	while ((*dest++ = *src++) != '\0' && nb-- > 0)
		;
	*--dest = '\0';
	return (r);
}
