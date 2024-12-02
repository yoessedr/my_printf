/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoessedr <yoessedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:40:09 by yoessedr          #+#    #+#             */
/*   Updated: 2024/11/30 20:26:20 by yoessedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int n, char c);
int		ft_putptr(void *p);
int		ft_putunsignednbr(unsigned int i);
int		ft_printf(const char *format, ...);
int		ft_strchr(const char *s, char i);
void	ft_check_format(char specifier, int *count, va_list *args);
int		ft_checker(const char *s);

#endif
