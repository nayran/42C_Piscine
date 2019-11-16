/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 00:41:23 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/10 00:41:54 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int size2;
	int newsize;

	if (size == 0)
		return (size2);
	if (size2 >= size)
		newsize = size - 1;
	else
		newsize = size2;
	dest[newsize] = '\0';
	return (size2);
}
