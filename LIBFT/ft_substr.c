/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:03:09 by hgrissen          #+#    #+#             */
/*   Updated: 2019/10/31 21:19:32 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (!(string = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[i] != '\0' && len > 0)
	{
		string[i++] = s[start++];
		len--;
	}
	string[i] = '\0';
	return (string);
}
