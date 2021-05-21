/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:37:12 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/03 00:03:23 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dstcopy;
	unsigned char *srccopy;

	dstcopy = (unsigned char *)dst;
	srccopy = (unsigned char *)src;
	if (src || dst)
		while (n--)
		{
			*dstcopy++ = *srccopy++;
		}
	return (dst);
}
