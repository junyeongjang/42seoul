/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:47:35 by jjang             #+#    #+#             */
/*   Updated: 2021/01/19 16:59:59 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *start;

	start = (char*)s;
	while (*s++)
		;
	while (--s != start && *s != (char)c)
		;
	if (*s == (char)c)
		return (char*)s;
	return (NULL);
}
