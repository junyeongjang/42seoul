/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:52:57 by jjang             #+#    #+#             */
/*   Updated: 2021/01/19 17:00:39 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len2;

	len2 = strlen(needle);
	if (!len2)
		return ((char*)haystack);
	while (len >= len2)
	{
		len--;
		if (!memcmp(haystack, needle, len2))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
