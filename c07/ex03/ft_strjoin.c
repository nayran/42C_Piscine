/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:35:44 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/22 05:39:06 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int count_dest;
	int count_src;

	count_dest = ft_strlen(dest);
	count_src = ft_strlen(src);
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest = dest - (count_dest + count_src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;

	i = 1;
	if (size < 0)
		return ("Erro");
	newstr = (char *)malloc((size + 1) * (sizeof(strs) + sizeof(sep)));
	if (size > 0)
		ft_strcpy(newstr, strs[0]);
	while (i < size)
	{
		ft_strcat(newstr, sep);
		ft_strcat(newstr, strs[i]);
		i++;
	}
	return (newstr);
}
