/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <sconcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:37:03 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 15:07:13 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_specifier(t_print *tab, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_print_char(tab);
	else if (format[pos] == 's')
		ft_print_string(tab);
	else if (format[pos] == 'd' || format[pos] == 'i')
		ft_print_int(tab);
	else if (format[pos] == 'u')
		ft_print_unsigned_int(tab);
	else if (format[pos] == 'p')
		ft_print_pointer(tab);
	else if (format[pos] == 'x' || format[pos] == 'X')
		ft_print_hexa(tab, format[pos] - 23);
	else if (format[pos] == '%')
		ft_print_percentage(tab);
	return (pos);
}
