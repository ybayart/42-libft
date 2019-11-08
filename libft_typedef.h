/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_typedef.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:23:27 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/06 18:25:18 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPEDEF_H
# define LIBFT_TYPEDEF_H

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
