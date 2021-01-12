* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:00:00 by jjang             #+#    #+#             */
/*   Updated: 2021/01/11 19:23:02 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len2;

	len2 = strlen(s2);
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
