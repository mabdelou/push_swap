/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:39 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:29:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_sa(t_node *ar, bool torn)
{
	int	a;

	if (((ar->element - 1) - ar->size) > 1)
	{
		a = ar->arr[0];
		ar->arr[0] = ar->arr[1];
		ar->arr[1] = a;
	}
	if (torn != false)
		write(1, "sa\n", 3);
}
