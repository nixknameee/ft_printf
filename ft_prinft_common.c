/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_common.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:35:29 by ngjokaj           #+#    #+#             */
/*   Updated: 2022/11/02 16:36:30 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
    counter++;
}

void    ft_puthex(unsigned long long n, int c)
{
    int x;

    if (c == 1)
            x = 55;
    else
    	x = 87;
	if (n >= 16)
	{
		ft_puthex((n / 16), c);
		if ((n % 16) <= 9)
			ft_putchar((n % 16) + 48);
		else if ((n % 16) > 9)
			ft_putchar((n % 16) + x);
	}
	else
	{
		if ((n % 16) <= 9)
			ft_putchar(n + 48);
		else if ((n % 16) > 9)
			ft_putchar(n + x);
	}

}

void    ft_putin(long long n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n > 9)
    {
        ft_putin((n / 10));
        ft_putchar((n % 10) + 48);
    }
    else
            ft_putchar(n +48);
}

void    ft_putstr(char *s)
{
    int i;

    i = 0;
    if(s)
    {
        while (s[i])
        {
            ft_putchar(s[i]);
            i++;
        }
    }
    else
            ft_putstr("(null)");
}
int	ft_form(char c, va_list ap, int counter)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	if (c == 's')
		ft_putstr(va_arg(ap, char *));
	if (c == 'p')
		{
			ft_putstr("0x");
			ft_puthex(va_arg(ap, unsigned long), 0);
		}
		return (counter);
	if (c == 'd')
		ft_putin(va_arg(ap, int));
	if (c == 'i')
		ft_putin(va_arg(ap, int));
	if (c == 'u')
		ft_putin(va_arg(ap, unsigned int));
	if (c == 'x')
		ft_puthex(va_arg(ap, unsigned int), 0);
	if (c == 'X')
		ft_puthex(va_arg(ap, unsigned int), 1);
	if (c == '%')
		ft_putchar('%');
}
