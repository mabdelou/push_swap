# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 06:35:40 by mabdelou          #+#    #+#              #
#    Updated: 2023/10/17 11:21:09 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = push_swap
CNAME = checker
FILES = push_swap_mondatory/main.c \
        push_swap_mondatory/ft_ra.c \
		push_swap_mondatory/ft_sb.c \
		push_swap_mondatory/get_min_b.c \
		push_swap_mondatory/ft_rb.c \
		push_swap_mondatory/ft_ss.c \
		push_swap_mondatory/ft_rr.c \
		push_swap_mondatory/ft_atoi.c \
		push_swap_mondatory/ft_rra.c \
		push_swap_mondatory/get_max.c \
		push_swap_mondatory/get_max_b.c \
		push_swap_mondatory/ft_rrb.c \
		push_swap_mondatory/ft_isdigit.c \
		push_swap_mondatory/ft_rrr.c \
		push_swap_mondatory/ft_pa.c \
		push_swap_mondatory/sorting_big_element.c \
		push_swap_bonus/check_if_sorting.c \
		push_swap_mondatory/ft_pb_no_print.c \
		push_swap_mondatory/ft_pa_no_print.c \
		push_swap_mondatory/sorting_or_not.c \
		push_swap_mondatory/ft_pb.c \
		push_swap_mondatory/ft_sa.c \
		push_swap_mondatory/get_min.c

B_FILES =	push_swap_bonus/cheker_main.c \
			push_swap_bonus/check_mouve.c \
			push_swap_bonus/check_if_sorting.c \
			push_swap_mondatory/ft_ra.c \
			push_swap_mondatory/ft_sb.c \
			push_swap_mondatory/ft_atoi.c \
			push_swap_mondatory/get_min_b.c \
			push_swap_mondatory/ft_isdigit.c \
			push_swap_mondatory/ft_rb.c \
			push_swap_mondatory/ft_ss.c \
			push_swap_mondatory/ft_rr.c \
			push_swap_mondatory/ft_rra.c \
			push_swap_mondatory/get_max.c \
			push_swap_mondatory/get_max_b.c \
			push_swap_mondatory/ft_rrb.c \
			push_swap_mondatory/ft_rrr.c \
			push_swap_mondatory/ft_pa.c \
			push_swap_mondatory/sorting_big_element.c \
			push_swap_mondatory/ft_pb_no_print.c \
			push_swap_mondatory/ft_pb.c \
			push_swap_mondatory/ft_sa.c \
			push_swap_mondatory/get_min.c \
			push_swap_mondatory/get_next_line.c \
			push_swap_mondatory/get_next_line_utils.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES_PATH)$(FILES) -o $(NAME)

bonus: $(B_FILES)
	$(CC) $(CFLAGS) $(B_FILES_PATH)$(B_FILES) -o $(CNAME)  

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(CNAME)

re: fclean all

.PHONY: all clean fclean re bonus
