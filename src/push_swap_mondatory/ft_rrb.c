/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:52 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:28:55 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_rrb(t_node *ar, bool torn)
{
	int	a;
	int	b;
	int	i;

	i = -1;
	if (ar->size > 1)
	{
		a = ar->brr2[ar->size - 1];
		b = ar->size - 1;
		while (++i < b)
			ar->brr2[b - i] = ar->brr2[b - (i + 1)];
		ar->brr2[0] = a;
		if (torn != false)
			write(1, "rrb\n", 4);
	}
}
