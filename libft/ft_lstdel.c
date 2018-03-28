/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:40:17 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/28 20:12:58 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ping;

	ping = *alst;
	if (alst != NULL && *alst != NULL && (*del))
	{
		while (ping)
		{
			del(ping->content, ping->content_size);
			free(ping);
			ping = ping->next;
		}
		*alst = NULL;
	}
}
