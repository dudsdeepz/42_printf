/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:16:20 by eduarodr          #+#    #+#             */
/*   Updated: 2022/11/15 10:01:30 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;

	va_list (arg);
	va_start (arg, format);
	i = 0;
	while (*format)
	{
		while (*format != '%' && *format != '\0')
		{
			ft_putchar(*format);
			format++;
		}
		if (*format == '%')
	}
	va_end(arg, format);
	return (0);
}

int	main(void)
{
	ft_printf("abcdt%");
	return (0);
}
