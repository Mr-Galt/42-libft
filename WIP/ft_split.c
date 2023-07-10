/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:37:42 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/10 10:30:53 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_wordcounter(char const *s, char c)
// {
// 	size_t	count;

// 	if (!*s)
// 		return (0);
// 	count = 0;
// 	while (*s)
// 	{
// 		while (*s == c)
// 			s++;
// 		if (*s)
// 			count++;
// 		while (*s != c && *s)
// 			s++;
// 	}
// 	return (count);
// }

// size_t	ft_skip_chars(const char *s, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] == c && s[i] != '\0')
// 		i++;
// 	return (i);
// }

// size_t	ft_word_len(const char *s, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != c && s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**lst;
// 	size_t	word_len;
// 	int		i;

// 	if (!s)
// 		return (NULL);
// 	lst = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
// 	if (!lst)
// 		return (NULL);
// 	i = 0;
// 	while (*s)
// 	{
// 		s += ft_skip_chars(s, c);
// 		if (*s)
// 		{
// 			word_len = ft_word_len(s, c);
// 			lst[i++] = ft_substr(s, 0, word_len);
// 			s += word_len;
// 		}
// 	}
// 	lst[i] = NULL;
// 	return (lst);
// }

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	strs = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
