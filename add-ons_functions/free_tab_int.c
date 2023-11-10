/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:08:26 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 19:14:34 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

void	*free_tab_int(int **tab, int size)
{
	int	i;

	i = 0;
	if (!tab)
		return (NULL);
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}
