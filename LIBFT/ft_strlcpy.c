/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 05:51:08 by hgrissen          #+#    #+#             */
/*   Updated: 2019/10/30 16:42:38 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = dst;
	i = 0;
	if (size == 0)
		return (ft_strlen(s));
	while (size - 1 && src[i] != '\0')
	{
		d[i] = s[i];
		size--;
		i++;
	}
	d[i] = '\0';
	return (ft_strlen(src));
}
