# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:15:05 by jrenault          #+#    #+#              #
#    Updated: 2023/11/10 19:17:10 by lezard           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: bonus all clean fclean re

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
add-ons_functions/free_tab.c add-ons_functions/free_tab_int.c add-ons_functions/free_tab_void.c add-ons_functions/ft_count.c add-ons_functions/ft_count_long.c add-ons_functions/ft_count_ul.c add-ons_functions/ft_count_unsigned.c add-ons_functions/ft_putchar.c add-ons_functions/ft_putnbr.c add-ons_functions/ft_putnbr_base.c add-ons_functions/ft_putnbr_base_ul.c add-ons_functions/ft_putstr.c add-ons_functions/ft_putunbr.c add-ons_functions/ft_strcmp.c add-ons_functions/ft_strcpy.c add-ons_functions/ft_strlen_doublechar.c add-ons_functions/ft_strncpy.c add-ons_functions/ft_swap_int.c \
add-ons_functions/get_next_line/get_next_line.c add-ons_functions/get_next_line/get_next_line_utils.c \
add-ons_functions/ft_printf/ft_printf.c add-ons_functions/ft_printf/ispercent_c.c add-ons_functions/ft_printf/ispercent_capx.c add-ons_functions/ft_printf/ispercent_d_i.c add-ons_functions/ft_printf/ispercent_p.c add-ons_functions/ft_printf/ispercent_s.c add-ons_functions/ft_printf/ispercent_u.c add-ons_functions/ft_printf/ispercent_x.c add-ons_functions/ft_printf/search_arg.c \
add-ons_functions/ft_atoi_base.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

CC = gcc
FLAGS = -Wall -Wextra -Werror
SANITFLAG = -Wall -Wextra -Werror -g -fsanitize=address
HEAD = libft.h

LIB = ar rc

RM = rm -f

%.o:		%.c ${HEAD} Makefile
			${CC} ${FLAGS} -include${HEAD} -c $< -o $@

${NAME}: 	${OBJS} Makefile
			${LIB} ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJS_BONUS} Makefile
			${LIB} ${NAME} ${OBJS_BONUS}

sanit:		$(OBJS) main.c
			${CC} ${SANITFLAG} $(OBJS) main.c

all:		${NAME} Makefile

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME} ${OBJS_BONUS}

re:			fclean all
