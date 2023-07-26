/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:31:33 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:31:39 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_position_max_b(t_node *ar)
{
	int	i;

	i = 0;
	while (ar->max != ar->brr2[i])
		i++;
	ar->max_position = i;
}

void	ft_get_max_b(t_node *ar)
{
	int	i;
	int	max;
	int	med;

	med = ar->size / 2;
	i = -1;
	max = ar->brr2[0];
	while (++i < ar->size)
	{
		if (ar->brr2[i] > max)
			max = ar->brr2[i];
	}
	ar->max = max;
	ar->med = med;
	ft_position_max_b(ar);
}
