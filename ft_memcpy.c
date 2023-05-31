/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:58:34 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 20:16:39 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[12] = "Hello World";
// 	char	dest[13] = "Abacaxi bana";

// 	printf("Strings antes de memmove:\n");
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	ft_memmove(dest, src, 12);
// 	printf("Strings depois de memmove:\n");
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
