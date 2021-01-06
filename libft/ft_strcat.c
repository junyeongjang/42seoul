/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:26:34 by jjang             #+#    #+#             */
/*   Updated: 2021/01/06 13:46:53 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
