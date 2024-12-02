/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:37:57 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/30 21:10:38 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	if (!format || write(1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("csdiuxXp%", format[i + 1]))
		{
			i++;
			ft_check_format(format[i], &count, &args);
		}
		else if (!(format[i] == '%' && format[i + 1] == '\0'))
			count += ft_putchar(format[i]);
		i++;
	}
	if (ft_checker(format))
		return (-1);
	return (count);
}
