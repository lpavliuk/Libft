/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:34:41 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/27 17:58:52 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int					ft_atoi(const char *str)
{
	int			x;
	size_t		i;
	long long	num;

	x = 1;
	i = 0;
	num = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			&& str[i] != '\0')
		i++;
	(str[i] == '-') ? x = -1 : 0;
	(str[i] == '+' || str[i] == '-') ? i++ : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	(num < 0 && x == -1) ? num = 0 : 0;
	(num < 0 && x == 1) ? num = -1 : 0;
	return ((int)(num * x));
}
