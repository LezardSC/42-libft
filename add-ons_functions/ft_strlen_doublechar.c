/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_doublechar.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:12:04 by lezard            #+#    #+#             */
/*   Updated: 2023/11/10 19:15:49 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

int	ft_strlen_doublechar(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
