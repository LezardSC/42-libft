/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:56:26 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 18:35:51 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_itoa(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*shrink_itoa(int i, long int *big_n, int n, int *sign)
{
	char	*numstring;

	*big_n = n;
	*sign = 0;
	numstring = (char *)malloc(sizeof(char) * (i + 1));
	return (numstring);
}

char	*ft_itoa(int n)
{
	long int			big_n;
	int					i;
	int					sign;
	char				*numstring;

	i = (ft_count_itoa(n));
	numstring = shrink_itoa(i, &big_n, n, &sign);
	if (!numstring)
		return (NULL);
	if (big_n == 0)
		return (numstring[0] = '0', numstring[1] = '\0', numstring);
	numstring[i] = '\0';
	if (big_n < 0)
	{
		big_n *= -1;
		sign++;
	}
	while (i-- > 0)
	{
		numstring[i] = (big_n % 10) + '0';
		big_n = big_n / 10;
	}
	if (sign > 0)
		numstring[0] = '-';
	return (numstring);
}
