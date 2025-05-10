/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:31:45 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/08 23:31:48 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	size_t	i;
	int		res;
	
	i = 0;
	res = 0;
	while (nptr[i] != '\0')
	{
		if (ft_isdigit(nptr[i]))

		i++;
	}
	return (res);
}
