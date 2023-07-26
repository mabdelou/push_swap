/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soting_big_element.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:33:03 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:33:08 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort_3(t_node *ar, bool torn)
{
	ft_get_max(ar);
	ft_get_min(ar);
	if (ar->arr[1] == ar->max && ar->arr[2] == ar->min)
		ft_rra(ar, torn);
	else if (ar->arr[1] == ar->max && ar->arr[0] == ar->min)
	{
		ft_sa(ar, torn);
		ft_ra(ar, torn);
	}
	else if (ar->arr[1] == ar->min && ar->arr[0] == ar->max)
		ft_ra(ar, torn);
	else if (ar->arr[1] == ar->min && ar->arr[2] == ar->max)
		ft_sa(ar, torn);
	else if (ar->arr[0] == ar->max && ar->arr[2] == ar->min)
	{
		ft_sa(ar, torn);
		ft_rra(ar, torn);
	}
}

void	ft_sort_5(t_node *ar, bool torn)
{
	int	a;

	a = -1;
	while (((ar->element - 1) - ar->size) > 3)
	{
		ft_get_min(ar);
		if (ar->arr[0] == ar->min)
			ft_pb(ar, torn);
		else if (ar->min_position > ar->med)
			ft_rra(ar, torn);
		else
			ft_ra(ar, torn);
	}
	ft_sort_3(ar, torn);
	ft_pa(ar, torn);
	ft_pa(ar, torn);
}

void	ft_sort_100(t_node *ar, bool torn)
{
	int	a;
	int	b;

	b = -1;
	a = -1;
	while (((ar->element - 1) - ar->size) > 0)
	{
		ft_get_min(ar);
		while (ar->arr[0] <= ar->min + 15 && ((ar->element - 1) - ar->size) > 0)
			ft_pb(ar, torn);
		if (ar->arr[0] == ar->min)
			ft_pb(ar, torn);
		ft_ra(ar, torn);
	}
	while (ar->size > 0)
	{
		ft_get_max_b(ar);
		if (ar->brr2[0] == ar->max && ar->size > 0)
			ft_pa(ar, torn);
		if (ar->max_position > ar->med)
			ft_rrb(ar, torn);
		else
			ft_rb(ar, torn);
	}
}

void	ft_sort_500(t_node *ar, bool torn)
{
	int	a;
	int	b;

	b = -1;
	a = -1;
	while (((ar->element - 1) - ar->size) > 0)
	{
		ft_get_min(ar);
		while (ar->arr[0] <= ar->min + 30 && ((ar->element - 1) - ar->size) > 0)
			ft_pb(ar, torn);
		if (ar->arr[0] == ar->min)
			ft_pb(ar, torn);
		ft_ra(ar, torn);
	}
	while (ar->size > 0)
	{
		ft_get_max_b(ar);
		if (ar->brr2[0] == ar->max && ar->size > 0)
			ft_pa(ar, torn);
		if (ar->max_position > ar->med)
			ft_rrb(ar, torn);
		else
			ft_rb(ar, torn);
	}
}
