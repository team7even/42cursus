/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:58:34 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/02 22:58:50 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_isalpha(int c);
int ft_islower(int c);
int ft_isupper(int c);

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

int ft_islower(int c)
{
    if(c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

int ft_isupper(int c)
{
    if(c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

/*int	main(void)
{
	if (ft_isalpha(128))
        write(1, "T", 1);
    else
        write(1, "F", 1);
    write(1, "\n", 1);
}*/
