/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:50 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:29:52 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sb(t_node *ar, bool torn)
{
	int	a;

	if (ar->size > 1)
	{
		a = ar->brr2[0];
		ar->brr2[0] = ar->brr2[1];
		ar->brr2[1] = a;
	}
	if (torn != false)
		write(1, "sb\n", 3);
}