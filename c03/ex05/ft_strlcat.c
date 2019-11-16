/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:37:13 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/10 20:39:12 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int aux;

	i = size;
	while (i > 0)
	{
		if (*dest == '\0')
		{
			*dest = *src;
			src++;
			aux++;
		}
		dest++;
		i--;
	}
	size += aux;
	return (size);
}
