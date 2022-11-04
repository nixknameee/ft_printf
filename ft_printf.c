/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:30:07 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/11/02 16:30:11 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int	i;
	counter = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_form(s[i], ap, counter);
		}
		else
		{
			ft_putchar(s[i]);
		}
		i++;
	}
	va_end(ap);
	return(counter);
}
#include <limits.h>
#include <stdio.h>

	int	main(void)
{
	ft_printf("counter=%d\n", ft_printf("aa %s gae %% ae\n", "aegea %% ae f"));
	printf("counter=%d\n", printf("aa %s gae %% ae\n", "aegea %% ae f"));
	return (0);
}
