/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:04:03 by robferna          #+#    #+#             */
/*   Updated: 2023/05/31 17:20:15 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nd;

	if (!lst)
		return ;
	while (*lst)
	{
		nd = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nd;
	}
}
