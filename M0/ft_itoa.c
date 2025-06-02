/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 22:29:29 by dromo-me          #+#    #+#             */
/*   Updated: 2025/06/02 22:29:29 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

// Helper: Count digits + 1 if negative
static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// Helper: Fill the string from the end
static void	fill_number(char *str, int n, int len)
{
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		while (--len > 0)
		{
			str[len] = -(n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (--len >= 0)
		{
			str[len] = (n % 10) + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_number(str, n, len);
	return (str);
}
