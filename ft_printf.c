/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:58:32 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/05 12:20:24 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		count += ft_putunbr(va_arg(ap, unsigned int));
	else if (format == 'x')
		count = ft_putnbr_hex(va_arg(ap, unsigned int), 0);
	else if (format == 'X')
		count = ft_putnbr_hex(va_arg(ap, unsigned int), 1);
	else if (format == 'p')
		count = ft_putptr(va_arg(ap, void *));
	else if (format == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		temp;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			temp = ft_parse(*(++format), ap);
			if (count == -1)
				return (-1);
			count += temp;
		}
		else
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
