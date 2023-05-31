/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:11:05 by robferna          #+#    #+#             */
/*   Updated: 2023/05/24 14:57:03 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *src = "Hello World";
// 	int search = 'o';
// 	char *result = ft_strrchr(src, search);

// 	if (result != NULL)
// 	{
// 		printf("Encontrado: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Não encontrado");
// 	}
// 	return (0);
// }
