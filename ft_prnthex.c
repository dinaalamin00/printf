/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnthex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:19:27 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:45:39 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prnthex(unsigned long long x, int c)
{
	int		count;
	char	*lh;
	char	*uh;

	lh = "0123456789abcdef";
	uh = "0123456789ABCDEF";
	count = 0;
	if (x >= 16)
		count += ft_prnthex(x / 16, c);
	if (c == 0)
		count += ft_prntchar(lh[x % 16]);
	else
		count += ft_prntchar(uh[x % 16]);
	return (count);
}

// int main(void)
// {
// 	ft_prnthex(9223372036854775807, 1);
// 	printf("\n%X", 9223372036854775807);
// }
