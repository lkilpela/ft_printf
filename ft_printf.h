/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:55:10 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/08 09:20:41 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> 
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(unsigned char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned long num, int is_upper);
int	ft_putptr(void *p);

#endif
