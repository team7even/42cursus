/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:53:51 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/04 18:53:54 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memmove - This functions moves 'n' bytes from 'src' to 'dest'.
//			 To prevent overlap, it compares the address from 'dest' and 'src'
//			 with each other, in order to know where to copy from, starting
//			 at the beginning or from the end
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*aux_dest;
	const unsigned char	*aux_src;

	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	aux_dest = (unsigned char *)dest;
	aux_src = (const unsigned char *)src;
	if (aux_dest < aux_src)
	{
		while (i < n)
		{
			aux_dest[i] = aux_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			aux_dest[n] = aux_src[n];
		}
	}
	return (dest);
}
