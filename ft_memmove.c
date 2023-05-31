/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:53:43 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 14:54:47 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (s == NULL && d == NULL)
		return (d);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	i = n;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	return (d);
}

// int	main(void)
// {
// 	char	test[7] = "Hello ";
// 	char	*src = test + 2;
// 	char	*dest = test;
// 	printf("Strings antes de memmove:\n");
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	ft_memmove(dest, src, 3);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// }
