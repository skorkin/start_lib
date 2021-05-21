/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:33:34 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/03 07:16:37 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *bump;

	if (c == '\0')
	{
		bump = (char *)s;
		return (bump + ft_strlen(s));
	}
	return (ft_memchr(s, c, ft_strlen(s)));
}
