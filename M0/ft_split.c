/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:33:14 by dromo-me          #+#    #+#             */
/*   Updated: 2025/06/02 21:33:14 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Count number of words in string 's' separated by delimiter 'c'
static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// Free allocated memory in case of failure
static void	free_all(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
}

static int	skip_delims(const char *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	split_fill(char **res, const char *s, char c)
{
	int	i;
	int	start;
	int	word_i;

	i = 0;
	word_i = 0;
	while (s[i])
	{
		i = skip_delims(s, i, c);
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[word_i] = ft_substr(s, start, i - start);
			if (!res[word_i])
			{
				free_all(res, word_i);
				return (0);
			}
			word_i++;
		}
	}
	res[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	if (!split_fill(res, s, c))
		return (NULL);
	return (res);
}
