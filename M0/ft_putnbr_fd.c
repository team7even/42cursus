/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 23:34:33 by dromo-me          #+#    #+#             */
/*   Updated: 2025/06/02 23:34:33 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Made code with ft_itoa. Francinette (paco) throwed an error based on 
//    allocated memory. (?)
/*void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
	free(str);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
