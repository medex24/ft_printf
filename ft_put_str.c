/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 21:14:31 by mrharoui          #+#    #+#             */
/*   Updated: 2023/01/14 23:07:19 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_str(char *s, int *counter)
{
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		ft_putchar(*s, counter);
		s++;
	}
}
