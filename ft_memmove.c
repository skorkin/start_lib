/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <bzelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:11:22 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/12 14:40:34 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dstcopy;
	unsigned char *srccopy;

	dstcopy = (unsigned char *)dst;
	srccopy = (unsigned char *)src;
	if (dst || src)
	{
		if (dstcopy < srccopy)
			return (ft_memcpy(dst, src, len));
		while (len--)
			dstcopy[len] = srccopy[len];
	}
	return (dst);
}
