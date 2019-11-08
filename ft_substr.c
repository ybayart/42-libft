/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:43:07 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/08 14:36:51 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	init_len;
	char	*dst;
	size_t	i;

	if (s == NULL)
		return (NULL);
	init_len = ft_strlen(s);
	if (init_len < start)
	{
		if ((dst = malloc(sizeof(char))) == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	else
	{
		if (start + len > init_len && (i = 0) == 0)
			len = init_len - start;
		if ((dst = malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		while (++i - 1 < len)
			*(dst + i - 1) = *(s + start + i - 1);
		*(dst + i - 1) = '\0';
		return (dst);
	}
}
