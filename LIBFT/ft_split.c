/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 00:35:57 by hgrissen          #+#    #+#             */
/*   Updated: 2019/11/06 13:29:22 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(char const *s, char c)
{
	int		x;
	int		cnt;

	x = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (x == 0 && *s != c)
		{
			x = 1;
			cnt++;
		}
		if (x == 1 && *s == c)
			x = 0;
		s++;
	}
	return (cnt);
}

static int		length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void		*ft_free(char **tmp, int i)
{
	char	**out;

	out = tmp;
	while (i >= 0)
	{
		free(out[i]);
		i--;
	}
	free(out);
	out = NULL;
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**tmp;
	int		i;
	int		cnt;

	if (!s)
		return (NULL);
	i = 0;
	cnt = count(s, c);
	if (!(tmp = (char **)ft_calloc(cnt + 1, sizeof(char *))))
		return (NULL);
	while (cnt--)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (!(tmp[i] = ft_substr(s, 0, length(s, c))))
			return (ft_free(tmp, i));
		s = s + length(s, c);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
