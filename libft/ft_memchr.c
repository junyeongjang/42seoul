/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:35:01 by jjang             #+#    #+#             */
/*   Updated: 2021/01/18 19:31:56 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	my_c;
	size_t			i;

	s1 = (unsigned char*)s;
	my_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == my_c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
