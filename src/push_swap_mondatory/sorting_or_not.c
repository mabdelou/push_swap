/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_or_not.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:31:01 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/09 20:32:12 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

int	sorting_or_not(t_node *ar)
{
	int	a;

	a = 0;
	while (((ar->element - 1) - ar->size) > 0)
	{
		ft_get_min(ar);
		if (ar->arr[0] == ar->min)
			ft_pb_no_print(ar);
		else
			break ;
		a++;
	}
	if (((ar->element - 1) - ar->size) == 0)
	{
		while (a-- > 0)
			ft_pa_no_print(ar);
		return (1);
	}
	while (a-- > 0)
		ft_pa_no_print(ar);
	return (0);
}
