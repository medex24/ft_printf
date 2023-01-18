/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exa_x2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:06:58 by mrharoui          #+#    #+#             */
/*   Updated: 2023/01/16 04:46:38 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x2(unsigned int number, int *len)
{
	if (number >= 16)
	{
		ft_putnbr_x2((number / 16), len);
		ft_putnbr_x2((number % 16), len);
	}
	else if (number < 10)
	{
		ft_putchar((number + 48), len);
	}
	else
	{
		ft_putchar((number + 55), len);
	}
}
