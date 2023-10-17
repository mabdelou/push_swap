/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:31:50 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:31:53 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_position_min_b(t_node *ar)
{
	int	i;

	i = 0;
	while (ar->min != ar->brr2[i])
		i++;
	ar->min_position = i;
}

void	ft_get_min_b(t_node *ar)
{
	int	i;
	int	min;
	int	med;

	med = (ar->size / 2);
	i = -1;
	min = ar->brr2[0];
	while (++i < ar->size)
	{
		if (ar->brr2[i] < min)
			min = ar->brr2[i];
	}
	ar->min = min;
	ar->med = med;
	ft_position_min_b(ar);
}
