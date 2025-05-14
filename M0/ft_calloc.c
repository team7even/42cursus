/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo <dromo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:49:57 by dromo             #+#    #+#             */
/*   Updated: 2025/05/12 13:32:59 by dromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

/*
1. Receives count (number of 'objects') and the 'size' of each one.
2. Calls malloc with 'count' * 'size' (calculating the total)
   number of bytes needed.
3. If memory wasn´t allocated (ptr is NULL), returns NULL.
4. Initialize the allocated memory with '0's.
5. Returns pointer to allocated memory.
*/