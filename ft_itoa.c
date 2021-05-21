/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <bzelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:13:53 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/07 09:28:27 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			countdef(int n, int minus)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count + minus);
}

char				*ft_itoa(int n)
{
	int				minus;
	int				count;
	char			*res;
	long int		resul;

	minus = n < 0 ? 1 : 0;
	count = countdef(n, minus);
	res = malloc((count + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	resul = (long int)n;
	if (minus)
	{
		resul = (long int)n * (-1);
		res[0] = '-';
	}
	res[count] = '\0';
	res[count - 1] = '0';
	while (resul != 0)
	{
		count--;
		res[count] = (resul % 10) + '0';
		resul /= 10;
	}
	return (res);
}
