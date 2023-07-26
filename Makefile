# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 06:35:40 by mabdelou          #+#    #+#              #
#    Updated: 2022/02/08 06:35:46 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = push_swap
CNAME = checker
FILES = main.c \
        ft_ra.c \
		ft_sb.c \
		get_min_b.c \
		ft_rb.c \
		ft_ss.c \
		ft_rr.c \
		ft_atoi.c \
		ft_rra.c \
		get_max.c \
		get_max_b.c \
		ft_rrb.c \
		ft_isdigit.c \
		ft_rrr.c \
		ft_pa.c \
		sorting_big_element.c \
		check_if_sorting.c \
		ft_pb_no_print.c \
		ft_pa_no_print.c \
		sorting_or_not.c \
		ft_pb.c \
		ft_sa.c \
		get_min.c

B_FILES =	cheker_main.c \
			ft_ra.c \
			ft_sb.c \
			ft_atoi.c \
			get_min_b.c \
			ft_isdigit.c \
			ft_rb.c \
			ft_ss.c \
			ft_rr.c \
			ft_rra.c \
			get_max.c \
			get_max_b.c \
			ft_rrb.c \
			ft_rrr.c \
			ft_pa.c \
			sorting_big_element.c \
			check_if_sorting.c \
			ft_pb_no_print.c \
			ft_pb.c \
			ft_sa.c \
			get_min.c \
			get_next_line.c \
			check_mouve.c \
			get_next_line_utils.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

bonus: $(B_FILES)
	$(CC) $(CFLAGS) $(B_FILES) -o $(CNAME)  

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(CNAME)

re: fclean all

.PHONY: all clean fclean re bonus
