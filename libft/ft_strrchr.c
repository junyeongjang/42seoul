/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:47:35 by jjang             #+#    #+#             */
/*   Updated: 2021/01/11 19:25:04 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *start;

	start = (char*)s;
	while (*s++)
		;
	while (--s != start && *s != (char)ch)
		;
	if (*s == (char)ch) 
		return (char*)s;
	return (NULL);
}
