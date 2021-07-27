/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <sconcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:45:39 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 15:07:50 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_print
{
	va_list		args;
	int			total_length;

}				t_print;

int		ft_check_specifier(t_print *tab, const char *format, int pos);
void	ft_print_char(t_print *tab);
void	ft_print_hexa(t_print *tab, int c);
void	ft_print_int(t_print *tab);
void	ft_print_pointer(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_unsigned_int(t_print *tab);
void	ft_print_percentage(t_print *tab);
int		ft_printf(const char *string, ...);

#endif
