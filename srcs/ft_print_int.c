/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:38:22 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:38:24 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_int(t_print *tab)
{
	int		i;
	int		j;
	char	*num;
	int		len;

	i = 0;
	j = va_arg(tab->args, int);
	if (j == -2147483648)
	{
		tab->total_length += write(1, "-2147483648", 11);
		return ;
	}
	num = ft_itoa(j);
	if (!num)
		return ;
	len = ft_strlen(num);
	while (num[i])
		tab->total_length += write(1, &num[i++], 1);
	free(num);
}
