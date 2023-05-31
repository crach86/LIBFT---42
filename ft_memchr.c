/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:49:23 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 09:25:49 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[] = "Faculdade 42SP";
// 	char	search = 'l';
// 	char	*result;
// 	result = ft_memchr(str1, search, 8 * sizeof(char));
// 	if (result != NULL)
// 		printf("Caractere encontrado: %c\n", *result);
// 	else
// 		printf("Caractere não encontrado.\n");
// 	return (0);
// }
