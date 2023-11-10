/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:42:59 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 19:14:54 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

int	ft_count_unsigned(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
