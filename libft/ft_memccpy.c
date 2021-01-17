/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:14:02 by jjang             #+#    #+#             */
/*   Updated: 2021/01/15 19:04:50 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;
	unsigned char	my_c;

	my_c = (unsigned char)c;
	dst1 = (unsigned char*)dest;
	src1 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (dst1[i] == my_c)
			return (dst1 + i + 1);
		i++;
	}
	return (NULL);
}
