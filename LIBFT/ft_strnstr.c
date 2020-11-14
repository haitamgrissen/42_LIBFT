/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:44:15 by hgrissen          #+#    #+#             */
/*   Updated: 2019/11/05 19:45:11 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h_ptr;
	size_t	needle_len;
	size_t	j;
	size_t	i;

	h_ptr = (char *)haystack;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (!(needle_len = ft_strlen(needle)))
		return (h_ptr);
	if (ft_strlen(haystack) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (h_ptr[i] && i <= len - needle_len)
	{
		j = 0;
		while (needle[j] && needle[j] == h_ptr[i + j])
			j++;
		if (j == needle_len)
			return (&h_ptr[i]);
		i++;
	}
	return (NULL);
}
