/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:38:08 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/11/02 16:38:11 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>


void	ft_putchar(char c);
int		ft_form(char c, va_list ap, int counter);
void	ft_puthex(unsigned long long n, int c);
void	ft_putin(long long n);
int		ft_printf(const char *s, ...);
void	ft_putstr(char *s);
int     counter;

va_list ap;
#endif
