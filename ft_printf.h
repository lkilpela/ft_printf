/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:55:10 by lkilpela          #+#    #+#             */
/*   Updated: 2023/12/05 11:15:24 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putchar(unsigned char c);
int		ft_putstr(char *s);
int		ft_puthex(unsigned long num, int is_upper);
int		ft_putptr(void *p);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
long	ft_putnbr_hex(long n, int is_upper);

#endif
