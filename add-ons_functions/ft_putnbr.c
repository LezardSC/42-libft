/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:39:06 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 19:15:32 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

static void	is_negative(int nb)
{
	if (nb < 0)
		ft_putchar('-');
}

static void	is_zero(int nb)
{
	if (nb == 0)
		ft_putchar('0');
}

void	ft_putnbr(int nb)
{	
	long int	divider;
	int			temp_nb;

	divider = 1;
	temp_nb = 1;
	is_zero(nb);
	is_negative(nb);
	if (nb < 0)
		divider *= -1;
	while (temp_nb != 0)
	{
		temp_nb = nb / divider;
		divider = divider * 10;
	}
	divider = divider / 100;
	while (divider != 0)
	{
		temp_nb = nb / divider;
		ft_putchar(temp_nb + '0');
		nb = nb - temp_nb * divider;
		divider = divider / 10;
	}
}
