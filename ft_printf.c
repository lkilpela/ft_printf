/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:58:32 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/04 16:11:26 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *format, int *i, va_list ap)
{
	int	count;

	count = 0;
	if (format[*i] == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format[*i] == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (format[*i] == 'u')
		count += ft_putunbr(va_arg(ap, unsigned int));
	else if (format[*i] == 'x')
		count += ft_putnbr_hex(va_arg(ap, unsigned int), 0);
	else if (format[*i] == 'X')
		count += ft_putnbr_hex(va_arg(ap, unsigned int), 1);
	else if (format[*i] == 'p')
		count += ft_putptr(va_arg(ap, void *));
	else if (format[*i] == '%')
		count += ft_putpercent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_parse(format, &i, ap);
		}
		else
		{
			if (ft_putchar(format[i]) == -1)
				return (-1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
