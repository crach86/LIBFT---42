/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:14:07 by robferna          #+#    #+#             */
/*   Updated: 2023/05/22 20:39:24 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// static int	ft_words(const char *s, char c)
// {
// 	int	count;
// 	int	index;

// 	count = 0;
// 	index = 0;
// 	if (s[index] != '\0')
// 		return (0);
// 	while (s[index] != '\0')
// 	{
// 		if (s[0] == c)
// 			index++;
// 		if ((s[index] != c) && ((s[index + 1] == c) || (s[index + 1] == '\0')))
// 			count++;
// 		index++;
// 	}
// 	return (count);
// }

static int	count_words(char const *s, char c)
{
	int	i;
	int	old_i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
			i++;
		}
		old_i = i;
		while (*s && *s != c)
		{
			s++;
			i++;
		}
		if (i > old_i)
			n_words += 1;
	}
	return (n_words);
}

static void	ft_free(char **mem, int len)
{
	int	i;

	i = 0;
	while (*mem && i < len)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
}

static int	ft_str_len(char *str, char c)
{
	int	s_len;

	s_len = 0;
	while (str[s_len] && str[s_len] != c)
	{
		s_len++;
	}
	return (s_len);
}

static char	**ft_substring(char **mtz, char const *s, char c, size_t len)
{
	size_t	index;
	size_t	s_len;

	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			s_len = ft_str_len((char *)s, c);
			mtz[index] = ft_substr(s, 0, s_len);
			if (!mtz[index])
			{
				ft_free(mtz, len);
				return (NULL);
			}
			index++;
		}
		while (*s != c && *s)
			s++;
	}
	mtz[index] = NULL;
	return (mtz);
}

char	**ft_split(char const *s, char c)
{
	char	**mtz;
	size_t	wordcount;

	if (!s)
		return (NULL);
	wordcount = count_words(s, c);
	printf("%zu\n", wordcount);
	mtz = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (mtz != NULL)
		mtz = ft_substring(mtz, s, c, wordcount);
	return (mtz);
}

// int	main(void)
// {
// 	char	**str;
// 	char	c;
// 	char	s[] = "   abc   as  s a s";
// 	int		i;

// 	c = 32;
// 	str = ft_split(s, c);
// 	while (str[i] != NULL)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// }
