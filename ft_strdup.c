/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:49:21 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/30 19:08:28 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*fresh;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (!fresh)
		return (NULL);
	fresh[len] = 0;
	while (len-- > 0)
		fresh[len] = s1[len];
	return (fresh);
}