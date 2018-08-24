/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:13:11 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/28 19:47:22 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*begin;
	uintmax_t		*dst_ptr;
	const uintmax_t	*src_ptr;

	begin = dst;
	src_ptr = (const uintmax_t *)src;
	dst_ptr = (uintmax_t *)dst;
	while (1)
	{
		*dst_ptr = *src_ptr;
		if ((((*src_ptr - 0x101010101010101L)
			& ~(*src_ptr) & 0x8080808080808080L)) || len < 8)
		{
			src = (const char *)src_ptr;
			dst = (char *)dst_ptr;
			while ((*dst++ = *src++) && --len > 0)
				;
			(*dst != '\0') ? *dst = '\0' : 0;
			return (begin);
		}
		len -= 8;
		dst_ptr++;
		src_ptr++;
	}
}
