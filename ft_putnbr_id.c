/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:45:22 by mrharoui          #+#    #+#             */
/*   Updated: 2023/01/15 18:21:04 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_id(int n, int *counter)
{
	if (n == -2147483648)
		ft_put_str("-2147483648", counter);
	else if (n < 0)
	{
		ft_putchar('-', counter);
		ft_putnbr_id(-n, counter);
	}
	else if (n >= 10)
	{
		ft_putnbr_id(n / 10, counter);
		ft_putchar(n % 10 + '0', counter);
	}
	else
		ft_putchar(n + '0', counter);
	counter++;
}
