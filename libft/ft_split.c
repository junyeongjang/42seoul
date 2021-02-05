/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjang <jjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:36:38 by jjang             #+#    #+#             */
/*   Updated: 2021/02/03 13:12:03 by jjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if ((*s) == c)
			s++;
		else
		{
			cnt++;
			while ((*s) && (*s) != c)
				s++;
		}
	}
	return (cnt);
}

char	*create_word(char *word, char const *s, int k, int word_len)
{
	int		i;

	i = 0;
	while (word_len > 0)
		word[i++] = s[k - word_len--];
	word[i] = '\0';
	return (word);
}

char	**sol(char **res, char const *s, char c, int cnt)
{
	int		res_idx;
	int		k;
	int		word_len;

	res_idx = 0;
	k = 0;
	word_len = 0;
	while (s[k] && res_idx < cnt)
	{
		while (s[k] && s[k] == c)
			k++;
		while (s[k] && s[k] != c)
		{
			k++;
			word_len++;
		}
		if (!(res[res_idx] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		create_word(res[res_idx], s, k, word_len);
		word_len = 0;
		res_idx++;
	}
	res[res_idx] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		cnt;
	char	**res;

	if (!s)
		return (NULL);
	cnt = word_count(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (NULL);
	sol(res, s, c, cnt);
	return (res);
}
