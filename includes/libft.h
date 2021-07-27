/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:44:44 by sconcy            #+#    #+#             */
/*   Updated: 2021/07/27 13:44:46 by sconcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base(char *str, unsigned long n, int base, int c);
char	*ft_itoa(int n);
int		len(long n);
int		ft_numlen_base(unsigned long n, int base);
int		ft_numlen(long n);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned long n, char *base);
int		ft_strlen(const char *str);
char	*ft_unsigned_itoa(unsigned int n);

#endif
