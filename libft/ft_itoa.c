/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:41:26 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:41:28 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	len(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		if (n != -2147483648)
			i += 1;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			l;
	long long	nb;

	nb = n;
	l = len(nb);
	num = (char *)malloc(sizeof(char) * (l + 1));
	if (!num)
		return (NULL);
	num[l--] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		if (nb != -2147483648)
			num[0] = '-';
	}
	if (nb == 0)
		num[l] = 0 + '0';
	while (nb > 0)
	{
		num[l--] = nb % 10 + '0';
		nb /= 10;
	}
	return (num);
}
