/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:40:25 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/27 19:01:58 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int c;

	if (n == -2147483648)
		return (11);
	if (n >= 0)
		c = 1;
	else if (n < 0)
		c = 2;
	while (n / 10 != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static char	*ft_string(char *str, int n, int c)
{
	int i;
	int	k;

	k = 0;
	i = c - 1;
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
		k++;
	}
	while (k <= i)
	{
		if (n / 10 == 0)
			str[i] = (n + 48);
		else
			str[i] = (n % 10 + 48);
		i--;
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		c;
	char	*str;

	i = 0;
	c = 0;
	c = ft_count(n);
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (c + 1));
	if (n == -2147483648)
	{
		str = ft_string(str, n + 1, c);
		str[10] = '8';
	}
	else
		str = ft_string(str, n, c);
	str[c + 1] = '\0';
	return (str);
}
