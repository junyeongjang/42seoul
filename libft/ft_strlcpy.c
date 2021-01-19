/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:14:17 by jjang             #+#    #+#             */
/*   Updated: 2021/01/19 17:29:26 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	idx;

	if (dest == NULL && src == NULL)
		return (0);
	src_len	=	ft_strlen(src);
	idx		=	0;
	while (idx < src_len && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size > 0)
		dest[idx] = '\0';
	return (src_len);
}
