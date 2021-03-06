/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:13:08 by jjang             #+#    #+#             */
/*   Updated: 2021/02/01 13:58:42 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_char;
	int				idx;
	unsigned int	s_len;

	idx = 0;
	s_len = ft_strlen(s);
	if (!(s) || !(new_char = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len-- && (start < s_len))
	{
		new_char[idx] = s[start + idx];
		idx++;
	}
	new_char[idx] = '\0';
	return (new_char);
}
