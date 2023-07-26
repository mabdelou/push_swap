/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:27:25 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 18:27:29 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <stdio.h>
# include <string.h>

typedef struct t_node
{
	int	element;
	int	*arr;
	int	*brr2;
	int	b_switch;
	int	size;
	int	min;
	int	med;
	int	max;
	int	old_max;
	int	max_position;
	int	min_position;
	int	med_position;
	int	next_max;
	int	next_number;
}t_node;

long	ft_atoi(const char *str);
int		ft_isdigit(const char *str);
int		ft_strlen(char *s);
char	*get_next_line(int fd);
int		return_trorfo(char *str);
char	*ft_strjoin(char *s1, char*s2);
void	ft_sa(t_node *ar, bool torn);
void	ft_sb(t_node *ar, bool torn);
void	ft_ss(t_node *ar, bool torn);
void	ft_pa(t_node *ar, bool torn);
void	ft_pb(t_node *ar, bool torn);
void	ft_ra(t_node *ar, bool torn);
void	ft_rb(t_node *ar, bool torn);
void	ft_rr(t_node *ar, bool torn);
void	ft_rra(t_node *ar, bool torn);
void	ft_rrb(t_node *ar, bool torn);
void	ft_rrr(t_node *ar, bool torn);
void	ft_get_min(t_node *ar);
void	ft_get_max(t_node *ar);
void	ft_get_max_b(t_node *ar);
void	ft_get_min_b(t_node *ar);
void	ft_test(t_node *ar);
int		ft_best_mouve(t_node *ar);
void	ft_sort_3(t_node *ar, bool torn);
void	ft_sort_5(t_node *ar, bool torn);
void	ft_sort_100(t_node *ar, bool torn);
void	ft_sort_500(t_node *ar, bool torn);
void	ft_check_if_sorting(t_node *ar);
void	ft_check_mouve(t_node *ar);
void	ft_pb_no_print(t_node *ar);
int		sorting_or_not(t_node *ar);
void	ft_pa_no_print(t_node *ar);

#endif
