/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:08:52 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/14 23:14:22 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int aux;

	i = 0;
	aux = 1;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'z') ||
(*str >= 'A' && *str <= 'Z'))
		{
			if (aux && (*str >= 'a' && *str <= 'z'))
				*str = *str - 32;
			else if (!aux && (*str >= 'A' && *str <= 'Z'))
				*str = *str + 32;
			aux = 0;
		}
		else
			aux = 1;
	}
	return (str);
}
