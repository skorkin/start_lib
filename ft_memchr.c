/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:18:00 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/02 21:25:47 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *copy;

	copy = (unsigned char *)s;
	while (n--)
	{
		if (*copy == (unsigned char)c)
			return (copy);
		copy++;
	}
	return (NULL);
}
