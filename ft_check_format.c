/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:48:21 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/27 20:19:08 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_format(char specifier, int *count, va_list *args)
{
	if (specifier == '%')
		*count += ft_putchar('%');
	else if (specifier == 's')
		*count += ft_putstr(va_arg(*args, char *));
	else if (specifier == 'd' || specifier == 'i')
		*count += ft_putnbr(va_arg(*args, int));
	else if (specifier == 'p')
		*count += ft_putptr(va_arg(*args, void *));
	else if (specifier == 'x' || specifier == 'X')
		*count += ft_puthex(va_arg(*args, unsigned int), specifier);
	else if (specifier == 'c')
		*count += ft_putchar((char)va_arg(*args, int));
	else if (specifier == 'u')
		*count += ft_putunsignednbr(va_arg(*args, unsigned int));
	else
		*count += ft_putchar(specifier);
}
