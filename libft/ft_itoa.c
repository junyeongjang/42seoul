/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:07:09 by jjang             #+#    #+#             */
/*   Updated: 2021/01/29 17:28:22 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*postive_itoa(int cnt, long num)
{
	char	*res;

	if (!(res = (char*)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	res[cnt--] = '\0';
	while (cnt >= 0)
	{
		res[cnt] = (num % 10) + '0';
		num = num / 10;
		cnt--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	long		num;
	int			cnt;

	cnt = 1;
	num = (long)n;
	while (n /= 10)
		cnt++;
	if (num < 0)
	{
		if (!(res = (char*)malloc(sizeof(char) * (cnt + 2))))
			return (NULL);
		num *= -1;
		res[cnt + 1] = '\0';
		res[0] = '-';
		while (cnt)
		{
			res[cnt] = (num % 10) + '0';
			num = num / 10;
			cnt--;
		}
	}
	else
		return (postive_itoa(cnt, num));
	return (res);
}
