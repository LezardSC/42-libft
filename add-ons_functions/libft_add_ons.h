/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_add_ons.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:26:59 by lezard            #+#    #+#             */
/*   Updated: 2023/11/10 18:34:59 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ADD_ONS_H
# define LIBFT_ADD_ONS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

void			*free_tab(char **tab);
void			*free_tab_void(void **tab);
void			*free_tab_int(int **tab, int size);
int				ft_count(int n);
int				ft_count_long(long int n);
int				ft_count_ul(unsigned long int n);
int				ft_count_unsigned(unsigned int n);
void			ft_putchar(char c);
void			ft_putnbr_base(int nbr, char *base);
void			ft_putnbr_base_ul(unsigned long nbr, char *base);
void			ft_putnbr(int nb);
void			ft_putunbr(unsigned int nb);
void			ft_putstr(char *str);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
int				ft_strlen_doublechar(char **str);
void			ft_swap_int(int *a, int *b);

#endif
