/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:41:17 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/26 16:53:00 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	count = 0;
	while (str[i])
	{
		count += write(1, &str[i], 1);
		i++;
	}
	return (count);
}
