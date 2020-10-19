/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:02:18 by mkeel             #+#    #+#             */
/*   Updated: 2019/08/20 22:56:01 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);
	if (lst->next)
	{
		tmp->next = ft_lstmap(lst->next, f);
		if (tmp->next == NULL)
		{
			free(tmp);
			return (NULL);
		}
	}
	return (tmp);
}
