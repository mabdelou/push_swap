/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:32:24 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/09 20:32:42 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_if_sorting(t_node *ar)
{
	while (((ar->element - 1) - ar->size) > 0)
	{
		ft_get_min(ar);
		if (ar->arr[0] == ar->min)
			ft_pb_no_print(ar);
		else
			break ;
	}
	if (((ar->element - 1) - ar->size) == 0)
		write(1, "OK\n", 3);
	if (((ar->element - 1) - ar->size) != 0)
		write(1, "KO\n", 3);
}
