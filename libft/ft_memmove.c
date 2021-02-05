/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:21:56 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 13:15:37 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst1;
	char	*src1;
	int		ilen;

	if (dst == src || len == 0)
		return (dst);
	ilen = (int)len - 1;
	dst1 = (char*)dst;
	src1 = (char*)src;
	i = 0;
	if (src1 < dst1)
		while (ilen >= 0)
		{
			dst1[ilen] = src1[ilen];
			ilen--;
		}
	else
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	return ((void*)dst1);
}
