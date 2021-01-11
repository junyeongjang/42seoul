/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:14:02 by jjang             #+#    #+#             */
/*   Updated: 2021/01/11 19:25:26 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	void *p = memchr (src, c, n);

	if (p != NULL)
		return mempcpy(dest, src, p - src + 1);
	memcpy (dest, src, n);
	return (NULL);
}
