/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:16:04 by hgrissen          #+#    #+#             */
/*   Updated: 2019/11/02 12:31:45 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	char	*start;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(string = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if ((start = string))
	{
		if (s1)
			while (*s1)
				*string++ = *s1++;
		if (s2)
			while (*s2)
				*string++ = *s2++;
		*string = '\0';
	}
	return (start);
}
