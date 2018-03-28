/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:13:20 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/28 15:05:32 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ping;
	t_list *tmp;
	t_list *new;

	new = lst;
	if (lst)
	{
		if (!(ping = f(lst)))
			return (NULL);
		tmp = ping;
		lst = lst->next;
		while (lst)
		{
			if (!(ping->next = f(lst)))
				return (NULL);
			ping = ping->next;
			lst = lst->next;
		}
		return (tmp);
	}
	return (NULL);
}
