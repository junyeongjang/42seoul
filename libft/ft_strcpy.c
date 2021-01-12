/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:14:17 by jjang             #+#    #+#             */
/*   Updated: 2021/01/11 19:23:52 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *cp;

	cp = dest;
	while (*cp++ = *src++)
		;
	return (dest);
}
