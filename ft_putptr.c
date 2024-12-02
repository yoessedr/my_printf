/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:31:05 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/29 14:55:19 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_putaddr(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	num;

	num = (unsigned long)ptr;
	count = 0;
	if (!num)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	return (count += ft_putaddr(num));
}
