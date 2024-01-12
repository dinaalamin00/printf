/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prntun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:48:58 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:46:13 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prntun(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_prntnbr(n / 10);
	count += ft_prntchar(n % 10 + 48);
	return (count);
}
