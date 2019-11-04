/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:12:50 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/04 18:37:44 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*ptr;

	ptr = dest;
	while (n-- != 0 && (char)src != '\0'  && *(unsigned char*)(src + 1) != (unsigned char)c)
		*(unsigned char*)(ptr++) = *(unsigned char*)(src++);
	if (n > 0)
		return (dest);
	return (0);
}
