* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:00:00 by jjang             #+#    #+#             */
/*   Updated: 2021/01/10 16:06:00 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, size_t len)
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
