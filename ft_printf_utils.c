/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:35:46 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/07 12:52:58 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character
int	ft_putchar(unsigned char c)
{
	return (write(1, &c, 1));
}

//string
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	else
	{
		while (s[i])
		{
			if (write(1, &s[i], 1) == -1)
				return (-1);
			i++;
		}
	}
	return (i);
}

//decimal && integer
int	ft_putnbr(int n)
{
	char	c;
	int		len;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len = ft_putchar('-');
		if (len == -1)
			return (-1);
		n *= -1;
	}
	else
		len = 0;
	if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		if (len == -1)
			return (-1);
	}
	c = n % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}

//unsigned integer
int	ft_putunbr(unsigned int n)
{
	char	c;
	int		len;

	if (n >= 10)
	{
		len = ft_putunbr(n / 10);
		if (len == -1)
			return (-1);
	}
	else
		len = 0;
	c = n % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}
