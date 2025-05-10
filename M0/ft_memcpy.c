/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:47:08 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/04 17:47:12 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memcpy - Copy from *src to *dest 'n' bytes. Returns the address of dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*aux_dest;
	const unsigned char	*aux_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	i = 0;
	aux_dest = (unsigned char *)dest;
	aux_src = (const unsigned char *)src;
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
