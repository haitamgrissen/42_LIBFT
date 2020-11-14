/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:00:35 by hgrissen          #+#    #+#             */
/*   Updated: 2019/10/31 21:07:03 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*src;
	char			*string;
	char			*dst;
	unsigned int	i;

	src = (char *)s;
	if (!(string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	dst = string;
	i = 0;
	if (!dst)
		return (NULL);
	while (*src)
	{
		*dst++ = f(i, *src++);
		i++;
	}
	*dst = '\0';
	return (string);
}
