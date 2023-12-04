/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:35:46 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/04 16:35:06 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character
int	ft_putchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
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
	char	*c;
	int		len;

	len = 0;
	c = ft_itoa(n);
	if (c == NULL)
		return (-1);
	len = ft_putstr(c);
	free(c);
	return (len);
}
	/*if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
	}
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if (ft_putnbr(n / 10) == -1)
			return (-1);
	}
	c = n % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);

	return (i);*/

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

int	ft_putpercent(void)
{
	if (write(1, "%", 1) == -1)
		return (-1);
	return (1);
}
