/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:44:26 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 20:52:59 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	x;

	s_len = ft_strlen(src);
	if (!dst && size == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (size <= d_len)
		return (s_len + size);
	x = 0;
	while (src[x] != '\0' && d_len + x < size -1)
	{
		dst[d_len + x] = src[x];
		x++;
	}
	dst[d_len + x] = '\0';
	return (d_len + s_len);
}
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	s;
// 	size_t	d;
// 	size_t	di;
// 	size_t	si;

// 	si = ft_strlen(src);
// 	if (!dst && size == 0)
// 		return (si);
// 	d = ft_strlen(dst);
// 	di = d;
// 	if (size <= di)
// 		return (size + si);
// 	s = 0;
// 	while (src[s] && d + 1 < size)
// 	{
// 		dst[d] = src[s];
// 		s++;
// 		d++;
// 	}
// 	dst[d] = 0;
// 	return (di + si);
// }

// int	main(void)
// {
// 	char destination[20] = "Hello, ";
// 	const char *source = "world!";

// 	size_t result = strlcat(destination, source, 20);

// 	printf("Concatenated string: %s\n", destination);
// 	printf("Length of concatenated string: %zu\n", result);
// 	return 0;
// }
