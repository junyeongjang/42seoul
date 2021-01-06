/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:47:35 by jjang             #+#    #+#             */
/*   Updated: 2021/01/06 15:17:06 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
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
