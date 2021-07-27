/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:43:39 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:43:41 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*num;
	int		l;

	l = ft_numlen(n);
	num = (char *)malloc(sizeof(char) * (l + 1));
	if (!num)
		return (NULL);
	num[l--] = '\0';
	if (n == 0)
		num[l] = 0 + '0';
	while (n > 0)
	{
		num[l--] = n % 10 + '0';
		n /= 10;
	}
	return (num);
}
