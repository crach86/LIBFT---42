/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:12:06 by robferna          #+#    #+#             */
/*   Updated: 2023/05/31 17:14:23 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	end;

	if (s == 0)
		return (0);
	slen = ft_strlen(s);
	end = 0;
	if (start >= slen)
		return (ft_strdup(""));
	if (start < slen)
		end = slen - start;
	if (end > len)
		end = len;
	str = (char *)malloc(sizeof(char) * (end + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, end + 1);
	return (str);
}

// int	main(void)
// {
// 	const char		*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*substr;

// 	str = "Hello, World!";
// 	start = 7;
// 	len = 3;
// 	substr = ft_substr(str, start, len);
// 	if (substr)
// 	{
// 		printf("Substring: %s\n", substr);
// 		free(substr);
// 	}
// 	else
// 	{
// 		printf("Erro ao criar a substring.\n");
// 	}
// 	return (0);
// }
