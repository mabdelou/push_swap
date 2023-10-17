/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:27:35 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:27:38 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/header.h"

size_t	ft_strlenv1( const char *s)
{
	size_t	a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}

int	ft_isdigit(const char *str)
{
	size_t	a;
	int		b;
	size_t	size;

	size = ft_strlenv1(str);
	a = -1;
	if (str[0] == '-' || str[0] == '+')
		a++;
	while (++a < size)
	{
		if (str[a] >= 48 && str[a] <= 57)
			b = 1;
		else
			return (0);
	}
	return (b);
}
