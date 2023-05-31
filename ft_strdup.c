/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:54:21 by robferna          #+#    #+#             */
/*   Updated: 2023/05/22 21:50:37 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char	ft_strcpy(char *dest, const char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest[index]);
}

char	*ft_strdup(const char *s)
{
	unsigned int	new;
	char			*dup;

	new = ft_strlen(s) + 1;
	dup = (char *)malloc(new * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}

// int	main(void)
// {
// 	char	str1[20] = "Hello World";
// 	char	str2[20];
// 	char	*str3;

//    // testa a função ft_strlen()
// 	printf("O comprimento da string \"%s\" é %zu\n", str1, ft_strlen(str1));
//    // testa a função ft_strcpy()
// 	ft_strcpy(str2, str1);
// 	printf("str1: %s\nstr2: %s\n", str1, str2);
//    // testa a função ft_strdup()
// 	str3 = ft_strdup(str1);
// 	printf("str1: %s\nstr3: %s\n", str1, str3);
// 	free(str3);
// 	return (0);
// }
