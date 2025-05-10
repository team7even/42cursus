/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:40:42 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/06 21:40:47 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memcmp - Checks for two different spaces of memory up to 'n' bytes.
//			If both are the same (byte to byte comparison) returns 0.
//			If there is a byte of difference it will return the difference
//			between them, calculated as b1 - b2
//			It has similar behaviour as "strncmp"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	i = 0;
	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
