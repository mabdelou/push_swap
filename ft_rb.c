/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:23 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:28:26 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_rb(t_node *ar, bool torn)
{
	int	a;
	int	i;

	i = -1;
	if (ar->size > 1)
	{
		a = ar->brr2[0];
		while (++i < ar->size)
			ar->brr2[i] = ar->brr2[i + 1];
		ar->brr2[i - 1] = a;
	}
	if (torn != false)
		write(1, "rb\n", 3);
}
