/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:53:31 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/28 20:06:54 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char c)
{
	char	*hex;
	int		count;

	count = 0;
	hex = NULL;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, c);
	count += ft_putchar(hex[n % 16]);
	return (count);
}
