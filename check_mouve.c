/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mouve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:34:48 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/09 20:34:52 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_mouve1(t_node *ar, char *mouve, bool torn)
{
	if (mouve[0] == 'r' && mouve[1] == 'a' && mouve[2] == '\n')
		ft_ra(ar, torn);
	else if (mouve[0] == 'r' && mouve[1] == 'b' && mouve[2] == '\n')
		ft_rb(ar, torn);
	else if (mouve[0] == 'p' && mouve[1] == 'a' && mouve[2] == '\n')
		ft_pa(ar, torn);
	else if (mouve[0] == 'p' && mouve[1] == 'b' && mouve[2] == '\n')
		ft_pb(ar, torn);
	else if (mouve[0] == 's' && mouve[1] == 'a' && mouve[2] == '\n')
		ft_sa(ar, torn);
	else if (mouve[0] == 's' && mouve[1] == 's' && mouve[2] == '\n')
		ft_sa(ar, torn);
	else
		return (0);
	return (1);
}

void	ft_check_mouve2(t_node *ar, char *mouve, bool torn)
{
	if (ft_check_mouve1(ar, mouve, torn))
		return ;
	else if (mouve[0] == 'r' && mouve[1] == 'r' && mouve[2] == '\n')
		ft_sa(ar, torn);
	else if (mouve[0] == 's' && mouve[1] == 'b' && mouve[2] == '\n')
		ft_sb(ar, torn);
	else if (mouve[0] == 'r' && mouve[1] == 'r' && mouve[2] == 'a'
		&& mouve[3] == '\n')
		ft_rra(ar, torn);
	else if (mouve[0] == 'r' && mouve[1] == 'r' && mouve[2] == 'b'
		&& mouve[3] == '\n')
		ft_rrb(ar, torn);
	else if (mouve[0] == 'r' && mouve[1] == 'r' && mouve[2] == 'r'
		&& mouve[3] == '\n')
		ft_rrr(ar, torn);
	else
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	ft_check_mouve(t_node *ar)
{
	char	*mouve;
	bool	torn;

	mouve = NULL;
	torn = false;
	while (1)
	{
		mouve = get_next_line(0);
		if (mouve == NULL)
			break ;
		ft_check_mouve2(ar, mouve, torn);
	}
}
