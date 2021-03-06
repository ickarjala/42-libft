/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:30:41 by ikarjala          #+#    #+#             */
/*   Updated: 2022/02/11 03:06:00 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(char *a, char *b, size_t bytesize)
{
	while (bytesize-- > 0)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
		a++;
		b++;
	}
}
