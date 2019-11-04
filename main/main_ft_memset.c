/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:43:08 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/04 14:18:41 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *b, int c, unsigned int len);

int	main(void)
{
	char		b[26];
	int		c;
	unsigned int	len;
	int		i;

	c = 'h';
	len = 2;
	memset(b, c, len);
	printf("%s", b);
}
