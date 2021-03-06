/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:16:51 by ikarjala          #+#    #+#             */
/*   Updated: 2022/03/29 16:56:44 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		c_digits;
	t_bool	is_ltz;
	t_sbyte	ltz_mul;

	c_digits = ft_log10(n) + 1;
	is_ltz = n < 0;
	str = (char *)malloc(sizeof(char) * (size_t)(is_ltz + c_digits + 1));
	if (!str)
		return (NULL);
	*str = '-';
	str += c_digits + is_ltz;
	*str = '\0';
	ltz_mul = (t_sbyte)(1 | -is_ltz);
	*--str = (char)(ltz_mul * (n % 10) + '0');
	n /= ltz_mul * 10;
	while (n > 0)
	{
		*--str = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str - is_ltz);
}
