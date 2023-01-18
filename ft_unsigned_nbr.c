/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:52:28 by mrharoui          #+#    #+#             */
/*   Updated: 2023/01/15 21:20:14 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_nbr(unsigned int n, int *counter)
{
	if (n >= 10)
	{
		ft_unsigned_nbr(n / 10, counter);
		ft_putchar(n % 10 + '0', counter);
	}
	else
		ft_putchar(n + '0', counter);
	counter++;
}
