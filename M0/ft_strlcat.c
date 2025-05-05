/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 00:23:53 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/05 00:23:57 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_src;
	size_t	len_dst;
	size_t	len_src;

	i_src = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size <= len_dst)
		return (len_src + size);
	while (src[i_src] != '\0' && i_src + len_dst < size - 1)
	{
		dst[len_dst + i_src] = src[i_src];
		i_src++;
	}
	dst[len_dst + i_src] = '\0';
	return (len_src + len_dst);
}
