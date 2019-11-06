/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:43:07 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/05 20:44:50 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	init_len;
	char	*dst;
	int	i;

	init_len = ft_strlen(s);
	if (init_len < start)
		return (NULL);
	if (start + len > init_len)
		len = init_len - start;
	if ((dst = malloc((sizeof(dst) + 1) * len)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(dst + i) = *(s + start + i);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
