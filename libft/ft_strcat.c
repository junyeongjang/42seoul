/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:26:34 by jjang             #+#    #+#             */
/*   Updated: 2021/01/11 19:25:42 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *cp;

	cp = dest;
	while (*cp)
		cp++;
	while (*cp++ = *src++)
		;
	return (dest);
}
