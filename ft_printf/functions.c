/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:06:50 by eduarodr          #+#    #+#             */
/*   Updated: 2022/11/14 17:49:29 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

void 	check(char	a, va_list arg)
{
	int	counter;

	if (a == s)
		counter += putstr(va_arg(arg, char *))

}
