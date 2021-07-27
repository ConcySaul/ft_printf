/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:39:31 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:39:34 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_unsigned_int(t_print *tab)
{
	int				i;
	unsigned int	j;
	char			*num;
	int				len;

	i = 0;
	j = va_arg(tab->args, int);
	if (!j)
	{
		tab->total_length += write(1, "0", 1);
		return ;
	}
	num = ft_unsigned_itoa(j);
	if (!num)
		return ;
	len = ft_numlen(j);
	while (num[i])
		tab->total_length += write(1, &num[i++], 1);
	free(num);
}
