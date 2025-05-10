/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:03:07 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/07 22:03:10 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

		//recorrer big hasta encontrar el primer char de little
		//		if !FOUND && little[0] == big[X]
		//			FOUND!
		//		if (FOUND) j=1
		//			while (little[j] == big[i + j]) recorrer little comparando
		//							cada char con big hasta el nulo de little
		//				if (little[j+1] == '\0')
		//					return
		//			j++;
		//			