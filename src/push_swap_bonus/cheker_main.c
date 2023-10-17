/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:40:44 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/09 20:40:48 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

void	ft_first_push(t_node *ar, char **argv)
{
	int	a;
	int	*ary;

	ary = malloc(sizeof(int) * ar->element - 1);
	if (!ary)
		exit(0);
	a = -1;
	while (++a < ar->element - 1)
		ary[a] = ft_atoi(argv[a + 1]);
	ar->arr = &ary[0];
}

int	*ft_check_if_douplicat(t_node *ar, char **argv)
{
	int	a;
	int	arg;
	int	*numbers;

	numbers = malloc(sizeof(int) * (ar->element - 1));
	if (!numbers)
		exit(0);
	arg = ar->element;
	a = -1;
	if (arg <= 2)
		exit(0);
	while (arg-- != 1)
	{
		if (!ft_isdigit(argv[arg]) || ft_atoi(argv[arg]) < -2147483648
			|| ft_atoi(argv[arg]) > 2147483647)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
	}
	return (numbers);
}

void	ft_check_element(t_node *ar, char **argv)
{
	int	arg;
	int	a;
	int	b;
	int	*numbers;

	numbers = ft_check_if_douplicat(ar, argv);
	a = -1;
	arg = ar->element;
	while (arg-- != 1)
		numbers[arg - 1] = ft_atoi(argv[arg]);
	while (++a < ar->element - 1)
	{
		b = -1;
		while (++b < ar->element - 1)
		{
			if (numbers[a] == numbers[b] && b != a)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		}
	}
	free(numbers);
}

int	main(int argc, char **argv)
{
	int		a;
	t_node	ar;

	ar.size = 0;
	ar.old_max = 0;
	ar.next_number = 0;
	ar.brr2 = NULL;
	ar.element = argc;
	ft_check_element(&ar, argv);
	ft_first_push(&ar, argv);
	a = -1;
	ft_check_mouve(&ar);
	ft_check_if_sorting(&ar);
	free(ar.arr);
	free(ar.brr2);
}
