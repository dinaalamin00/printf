/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:21:31 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:45:23 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		cnt;

	cnt = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (!*(format + 1))
				break ;
			cnt += ft_checkspec(++format, args);
		}
		else
		{
			cnt += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (cnt);
}

// int main(void)
// {
	// char *s = NULL;
	// char c = 'a';
	// int n = 18;
	// int x , y;
	// int n = 9;
	// x = ft_printf("%s\n", s);
	// printf("%d\n", x);
	// y = printf("%s\n",s);
	// printf("%d\n", y);
	// ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	// printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf("%p", &n);
	// ft_printf(" %x ", -1);
	// printf("%%%hkkk\n");
	// ft_printf(("%%%hkkk"));
	// printf("%%%%hkkk");
// }
