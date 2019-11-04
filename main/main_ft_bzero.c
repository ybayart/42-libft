/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:43:08 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/04 15:38:29 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, unsigned long n);

int	main(void)
{
	char		b[26];
	int		c;
	unsigned long	n;
	int		i;

	c = 'h';
	n = 2;
	ft_bzero(b, n);
	printf("%s", b);
}
