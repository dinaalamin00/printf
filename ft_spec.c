/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:47:19 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:45:51 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkspec(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == '%')
		count += ft_prntchar('%');
	else if (*format == 'c')
		count += ft_prntchar(va_arg(args, int));
	else if (*format == 's')
		count += ft_prntstr(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_prntptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_prntnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_prntun(va_arg(args, unsigned int));
	else if (*format == 'x')
		count += ft_prnthex(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		count += ft_prnthex(va_arg(args, unsigned int), 1);
	return (count);
}
