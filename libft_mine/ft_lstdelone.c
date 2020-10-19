/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:23:20 by mkeel             #+#    #+#             */
/*   Updated: 2019/08/20 22:05:20 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !alst[0] || !del)
		return ;
	if (alst && alst[0])
	{
		del(alst[0]->content, alst[0]->content_size);
		free(alst[0]);
		alst[0] = NULL;
	}
}
