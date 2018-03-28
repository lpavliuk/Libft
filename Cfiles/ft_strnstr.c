/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:50:36 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/26 19:26:38 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(char *b, char *l, int i, int n)
{
	while (b[i] == l[n])
	{
		if (b[i + 1] == '\0' && l[n + 1] == '\0')
			return (0);
		i++;
		n++;
	}
	if (l[n] == '\0')
		return (0);
	else
		return (1);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		n;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (l[i] == '\0')
		return (b);
	while (b[i] != '\0' && len && ft_strlen(l) <= len)
	{
		n = 0;
		if (b[i] == l[n])
		{
			n = check(b, l, i, n);
			if (!n)
				return (b + i);
		}
		i++;
		len--;
	}
	return (NULL);
}
