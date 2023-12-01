/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_untils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:35:46 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/01 15:10:07 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character
int	handle_char(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

//string
int	handle_string(char *s)
{
	if (s == NULL)
		return (-1);
	while (*s != '\0')
	{
		if (write(1, s, 1) == -1)
			return (-1);
		s++;
	}
	return (1);
		s++;
}
//print hexadecimal
void	print_hex(unsigned long num, int is_upper)
{
	char	*hex;

	if (is_upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
		print_hex(num / 16, is_upper);
	if (write(1, hex[num % 16], 1) == -1)
		return (-1);
	return (1);
}
// pointer
int	handle_pointer(void *p)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (write(1, p, 1) == -1)
		return (-1);
	return (1);
	print_hex((unsigned long)p, 0);
}

//decimal && integer
int	handle_number(int n)
{
	char	c;
	
	c = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		handle_number(-n);
	}
	else if (n >= 10)
	{
		handle_number(n / 10);
		handle_number(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
	return (c);
}

//unsigned integer
int	handle_unsigned(unsigned int n)
{
	char	c;
	
	if (n >= 10)
	{
		handle_unsigned(n / 10);
		handle_unsigned(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
	return (1);
}

//hexadecimal upper

long handle_hex_upper(long n)
{
	char	c;
	

	if (n >= 16)
	{
		handle_hex_upper(n / 16);
		handle_hex_upper(n % 16);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
	return (1);
}