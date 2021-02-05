/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:54:42 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 13:52:48 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int len;

	if (!lst)
		return (0);
	len = 0;
	while (lst)
	{
		len++;
		if (lst->next)
			lst = lst->next;
		else
			break ;
	}
	return (len);
}
