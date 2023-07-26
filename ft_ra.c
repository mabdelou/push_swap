/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:14 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:28:17 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_ra(t_node *ar, bool torn)
{
	int	i;
	int	a;

	i = -1;
	if (((ar->element - 1) - ar->size) > 0)
	{
		a = ar->arr[0];
		while (++i < (ar->element - 1) - (ar->size + 1))
			ar->arr[i] = ar->arr[i + 1];
		ar->arr[i] = a;
		if (torn != false)
			write(1, "ra\n", 3);
	}
}
