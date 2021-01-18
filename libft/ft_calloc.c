/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 22:54:03 by jjang             #+#    #+#             */
/*   Updated: 2021/01/17 19:43:42 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;
	
	if (count == 0 || size == 0)
		return (NULL;)
	ptr = malloc(count * size);
	ft_bzero(ptr, count * size);
	return (ptr);
}
