/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:32:01 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 12:30:58 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_checkspec(const char *format, va_list args);
int	ft_prntchar(char c);
int	ft_prntstr(char *str);
int	ft_prntnbr(int n);
int	ft_prntun(unsigned int n);
int	ft_prnthex(unsigned long long x, int c);
int	ft_prntptr(void *ptr);

#endif