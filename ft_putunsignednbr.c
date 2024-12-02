/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:53:41 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/26 16:54:45 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunsignednbr(n / 10);
	count += ft_putchar((n % 10) + 48);
	return (count);
}
