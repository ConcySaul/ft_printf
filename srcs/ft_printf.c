/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:39:50 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:39:52 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->total_length = 0;
	return (tab);
}

int	ft_printf(const char *string, ...)
{
	t_print	*tab;
	int		i;
	int		ret;

	if (!string)
		return (0);
	ret = 0;
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_tab(tab);
	i = -1;
	va_start(tab->args, string);
	while (string[++i])
	{
		if (string[i] == '%')
			i = ft_check_specifier(tab, string, i + 1);
		else
			ret += write(1, &string[i], 1);
	}
	ret += tab->total_length;
	va_end(tab->args);
	free(tab);
	return (ret);
}
