/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:49:55 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/04 15:09:15 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//print hexadecimals
int	ft_puthex(unsigned long num, int is_upper)
{
	char	*hex;

	if (is_upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthex(num / 16, is_upper);
	if (write(1, &hex[num % 16], 1) == -1)
		return (-1);
	return (1);
}

// pointer - ft_puthex is always called, even if p is null. ft_puthex will 
// print 0 for a null pointer, which is the correct representation.
int	ft_putptr(void *p)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (ft_puthex((unsigned long)p, 0) == -1)
		return (-1);
	return (1);
}

// hexadecimal upper & lower
long	ft_putnbr_hex(long n, int is_upper)
{
	char	c;

	c = 0;
	if (n >= 16)
	{
		if (ft_putnbr_hex(n / 16, is_upper) == -1)
			return (-1);
	}
	n = n % 16;
	if (n < 10)
		c = n + '0';
	else
	{
		if (is_upper == 1)
			c = n + 'A' - 10;
		else
			c = n + 'a' - 10;
	}
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
