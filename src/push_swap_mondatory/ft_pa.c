/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:27:48 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:27:52 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_pa(t_node *ar, bool torn)
{
	int	a;
	int	*arr2;

	if (ar->size > 0)
	{
		ar->b_switch = ar->brr2[0];
		a = -1;
		while (++a < ar->size - 1)
			ar->brr2[a] = ar->brr2[a + 1];
		ar->brr2[a] = 0;
		arr2 = malloc(sizeof(int) * (ar->element - 1) - (ar->size - 1));
		if (!ar->arr)
			exit(0);
		arr2[0] = ar->b_switch;
		a = 0;
		while (++a < (ar->element - 1) - (ar->size - 1))
			arr2[a] = ar->arr[a - 1];
		free(ar->arr);
		ar->arr = &arr2[0];
		--ar->size;
	}
	if (torn != false)
		write(1, "pa\n", 3);
}
