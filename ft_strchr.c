/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:08:45 by robferna          #+#    #+#             */
/*   Updated: 2023/05/20 16:34:36 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "Hello, World!";
// 	int search_char = 'l';

// 	char *result = ft_strchr(str, search_char);

// 	if (result != NULL)
// 	{
// 		printf("Encontrado: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Caractere não encontrado.\n");
// 	}

// 	return (0);
// }
