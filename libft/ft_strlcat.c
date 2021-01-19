/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:26:34 by jjang             #+#    #+#             */
/*   Updated: 2021/01/19 16:59:41 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t  dest_len;
	size_t  src_len;
	size_t	i;
	size_t	j;

	j = 0;
	while (j < size && dest[j])
		j++;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (j + src_len);
}
