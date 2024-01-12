/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prntnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:56:49 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:45:46 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prntnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_prntchar('-');
		count += ft_prntchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		count += ft_prntchar('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_prntnbr(n / 10);
	count += ft_prntchar(n % 10 + 48);
	return (count);
}
