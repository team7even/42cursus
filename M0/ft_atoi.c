/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo <dromo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:31:45 by dromo-me          #+#    #+#             */
/*   Updated: 2025/05/12 13:10:14 by dromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/* Basic Function flow:
1. Ignore any 'white spaces' at beginning (ascii's 9 to 13 -> tabs, new lines,
   carry over).
2. Check for a sign (if any): '+' or '-'. If '-', store var 'sign'.
3. Read digits (while ft_isdigit()). While reading digits, store in 'res' the
   temporary result.
4.It will stop at first byte different than a number.

Note: It does not handle errors. Unkown behaviour for values outisde the range
    of int.
*/