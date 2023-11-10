/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ul.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:25:55 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 19:15:27 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

static int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base [i] == '-')
			return (0);
		i++;
	}
	return (1);
}

static void	ft_putnbr_remaster(unsigned long nbr, char *base)
{
	unsigned long	base_size;

	base_size = ft_strlen(base);
	if (nbr > 0)
	{
		ft_putnbr_remaster(nbr / base_size, base);
		write(1, &base[nbr % base_size], 1);
	}
}

void	ft_putnbr_base_ul(unsigned long nbr, char *base)
{
	if (check_error(base) == 1)
		ft_putnbr_remaster(nbr, base);
}
