/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:14:31 by jjang             #+#    #+#             */
/*   Updated: 2021/01/25 23:22:49 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	
	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (*(s1 + end - 1) && ft_strchr(set, *(s1 + end - 1)))
	{
		if (end - 1 < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	if (!(new_str = (char*)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(new_str, s1 + start, end - start + 1);
	return (new_str);	
}
