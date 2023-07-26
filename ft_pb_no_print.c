/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_no_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:42:56 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/09 20:43:01 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_pb_no_printv3(t_node *ar)
{
	int	i;
	int	*arr2;

	i = -1;
	arr2 = malloc(sizeof(int) * (ar->element - 1) - (ar->size + 1));
	if (!arr2)
		exit(0);
	while (++i < (ar->element - 1) - ar->size)
		arr2[i] = ar->arr[i + 1];
	free(ar->arr);
	ar->arr = &arr2[0];
}

void	ft_pb_no_printv2(t_node *ar)
{
	int	a;
	int	i;
	int	*brr2;

	++ar->size;
	ar->b_switch = ar->arr[0];
	brr2 = malloc(sizeof(int) * ar->size);
	if (!brr2)
		exit(0);
	a = -1;
	while (++a < ar->size)
		brr2[a] = 0;
	i = -1;
	if (ar->size > 0)
	{
		while (++i < ar->size - 1)
			brr2[i + 1] = ar->brr2[i];
		brr2[0] = ar->b_switch;
		free(ar->brr2);
	}
	else
		brr2[0] = ar->b_switch;
	ar->brr2 = &brr2[0];
}

void	ft_pb_no_print(t_node *ar)
{
	if (((ar->element - 1) - ar->size) > 0)
	{
		ft_pb_no_printv2(ar);
		ft_pb_no_printv3(ar);
	}
}
