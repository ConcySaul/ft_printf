/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:38:48 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:38:49 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_pointer(t_print *tab)
{
	unsigned long	j;

	j = (unsigned long)va_arg(tab->args, void *);
	if (!j)
	{
		tab->total_length += write(1, "0x0", 3);
		return ;
	}
	tab->total_length += write(1, "0x", 2);
	tab->total_length += ft_putnbr_base(j, "0123456789abcdef");
}
