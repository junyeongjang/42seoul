/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:53:09 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 13:51:39 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		if ((*lst)->next)
		{
			ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
		else
			break ;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
