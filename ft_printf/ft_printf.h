/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:38:08 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/11/04 09:11:59 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	print_c(char c);
int	ft_printer(char conv, va_list *va);
int	ft_printf(const char *format, ...);
int	print_p(unsigned long int n);
int	print_n(int n);
int	print_n2(unsigned int n);
int	print_h(unsigned int n, char h);
int	print_s(char	*s);
#endif
