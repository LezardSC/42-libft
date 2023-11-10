/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:49:32 by jrenault          #+#    #+#             */
/*   Updated: 2023/11/10 19:14:43 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add_ons.h"

void	*free_tab_void(void **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}
