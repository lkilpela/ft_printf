/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:49:55 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:47 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//print hexadecimals
int	ft_puthex(unsigned long num, int is_upper)
{
	char	*hex;
	int		len;

	if (is_upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
	{
		len = ft_puthex(num / 16, is_upper);
		if (len == -1)
			return (-1);
	}
	else
		len = 0;
	if (write(1, &hex[num % 16], 1) == -1)
		return (-1);
	return (len + 1);
}

// pointer
int	ft_putptr(void *p)
{
	int	len;
	int	hex_len;

	len = 0;
	len += write(1, "0x", 2);
	if (len == -1)
		return (-1);
	if (p == NULL)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		len += 1;
	}
	else
	{
		hex_len = ft_puthex((unsigned long)p, 0);
		if (hex_len == -1)
			return (-1);
		len += hex_len;
	}
	return (len);
}
