/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:35:46 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/05 12:52:55 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character
int	ft_putchar(unsigned char c)
{
	int	len;

	len = write(1, &c, 1);
	if (len == -1)
		return (-1);
	return (len);
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
