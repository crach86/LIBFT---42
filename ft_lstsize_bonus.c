/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:34:54 by robferna          #+#    #+#             */
/*   Updated: 2023/05/30 14:12:53 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sz;

	sz = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		sz++;
		lst = lst->next;
	}
	return (sz);
}
