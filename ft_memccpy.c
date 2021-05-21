/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:44:28 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/03 04:28:00 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstcopy;
	unsigned char	*srccopy;
	size_t			count;

	count = 0;
	dstcopy = (unsigned char *)dst;
	srccopy = (unsigned char *)src;
	if (dst || src)
		while (n--)
		{
			dstcopy[count] = srccopy[count];
			if (dstcopy[count] == (unsigned char)c)
				return (dst + count + 1);
			count++;
		}
	return (NULL);
}
