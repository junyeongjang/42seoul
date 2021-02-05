/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:01:21 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 13:14:19 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sp;
	char		*dp;

	if (!dest && !src)
		return (0);
	dp = dest;
	sp = src;
	while (n--)
		*dp++ = *sp++;
	return (dest);
}
