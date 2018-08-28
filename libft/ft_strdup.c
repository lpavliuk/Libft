/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:56:55 by opavliuk          #+#    #+#             */
/*   Updated: 2018/04/13 22:16:43 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*begin;

	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	begin = d;
	if (d == NULL)
		return (NULL);
	while (*s1 != '\0')
		*d++ = *s1++;
	*d = '\0';
	return (begin);
}
