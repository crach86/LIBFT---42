/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 07:45:33 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 20:55:30 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if ((nmemb * size != 0) && (nmemb * size) / size != nmemb)
		return (NULL);
	array = (char *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

// int	main(void)
// {
// 	size_t	nmemb = 9;
// 	size_t	size = sizeof(char);
// 	char	*str = (char *) ft_calloc(nmemb, size);
// 	size_t	i;

// 	i = 0;
// 	while (i < nmemb * size)
// 	{
// 		str[i] = 'a';
// 		i++;
// 	}
// 	printf("Array: %s \n", str);
// 	printf("\n");
// 	free(str);
// 	return (0);
// }
//
