/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:27 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/30 20:58:59 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(const char *s, char i)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if (s[j] == i)
			return (1);
		j++;
	}
	return (0);
}

int	ft_checker(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%' )
		{
			i++;
			if (s[i] == '\0')
				return (-1);
		}
		i++;
	}
	return (0);
}
