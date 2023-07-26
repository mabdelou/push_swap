/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:44 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:28:47 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_rra(t_node *ar, bool torn)
{
	int	a;
	int	b;
	int	i;

	i = -1;
	if (((ar->element - 1) - ar->size) > 0)
	{
		a = ar->arr[(ar->element - 1) - (ar->size + 1)];
		b = (ar->element - 1) - (ar->size + 1);
		while (++i < b)
			ar->arr[b - i] = ar->arr[b - (i + 1)];
		ar->arr[0] = a;
		if (torn != false)
			write(1, "rra\n", 4);
	}
}
