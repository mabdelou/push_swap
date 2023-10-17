/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:32:04 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:32:15 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_position_min(t_node *ar)
{
	int	i;

	i = 0;
	while (ar->min != ar->arr[i])
		i++;
	ar->min_position = i;
}

void	ft_get_min(t_node *ar)
{
	int	i;
	int	min;
	int	med;

	med = (((ar->element - 1) - ar->size) / 2);
	i = -1;
	min = ar->arr[0];
	while (++i < (ar->element - 1) - ar->size)
	{
		if (ar->arr[i] < min)
			min = ar->arr[i];
	}
	ar->min = min;
	ar->med = med;
	ft_position_min(ar);
}
