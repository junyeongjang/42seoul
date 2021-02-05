/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:52:57 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 14:00:05 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t need_len;
	size_t hay_len;
	size_t res_len;

	if (*needle == '\0')
		return ((char*)haystack);
	need_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	if (hay_len < need_len || len < need_len)
		return (NULL);
	res_len = hay_len > len ? len : hay_len;
	while (res_len-- >= need_len)
	{
		if (!ft_memcmp(haystack, needle, need_len))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
