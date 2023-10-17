/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:32:27 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:32:31 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_position_max(t_node *ar)
{
	int	i;

	i = 0;
	while (ar->max != ar->arr[i])
		i++;
	ar->max_position = i;
}

void	ft_get_max(t_node *ar)
{
	int	i;
	int	max;
	int	med;

	med = (((ar->element) - ar->size) / 2);
	i = -1;
	max = ar->arr[0];
	while (++i < (ar->element - 1) - ar->size)
	{
		if (ar->arr[i] > max)
			max = ar->arr[i];
	}
	ar->max = max;
	ar->med = med;
	ft_position_max(ar);
}
