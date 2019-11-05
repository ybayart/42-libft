/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:06:14 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/05 16:10:06 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr2;

	ptr = (char*)s;
	ptr2 = 0;
	while (*(ptr++))
		if (*ptr == c)
			ptr2 = ptr;
	if (c == '\0')
		return (ptr);
	return (ptr2);
}
