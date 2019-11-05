/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:26:35 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/04 21:38:37 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char*)(s) != '\0' && n-- > 0)
	{
		if (*(unsigned char*)(s++) == (unsigned char)c)
		{
			return ((void*)s);
		}
	}
	return (0);
}
