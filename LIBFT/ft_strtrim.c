/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:05:49 by hgrissen          #+#    #+#             */
/*   Updated: 2019/10/31 18:56:52 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	size;
	size_t	start;
	size_t	finish;

	start = 0;
	if (!s1)
		return (0);
	finish = ft_strlen(s1);
	if (s1 && !set)
	{
		trimmed = ft_strdup(s1);
		return (trimmed);
	}
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strchr(set, s1[finish]) && finish > start)
		finish--;
	size = ft_strlen(s1 + start) - ft_strlen(s1 + finish) + 2;
	if (!(trimmed = (char *)malloc(size * sizeof(char))))
		return (0);
	if (!(trimmed = ft_substr(s1, start, size - 1)))
		return (ft_strdup(""));
	return (trimmed);
}
