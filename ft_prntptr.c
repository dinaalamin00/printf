/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prntptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahmed <diahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:13:01 by diahmed           #+#    #+#             */
/*   Updated: 2023/11/16 15:46:05 by diahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prntptr(void *ptr)
{
	int					count;
	unsigned long long	p;

	p = (unsigned long long) ptr;
	count = 0;
	count += ft_prntstr("0x");
	count += ft_prnthex(p, 0);
	return (count);
}
