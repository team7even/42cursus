/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:06:28 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/06 00:06:31 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memchr - This function returns the memory direction where 'c' is found
// 			within the first 'n' bytes. If it can't be found, it returns NULL
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)b[i] == (unsigned char)c)
			return ((char *) &b[i]);
		i++;
	}
	return (NULL);
}
