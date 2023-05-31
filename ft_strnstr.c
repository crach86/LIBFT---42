/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:42:34 by robferna          #+#    #+#             */
/*   Updated: 2023/05/24 10:32:23 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)&big[i]);
	if (len == 0)
		return (NULL);
	if (little == big)
		return ((char *)&big[i]);
	while (big[i] != '\0' && i < len)
	{
		while (little[j] != '\0' && (i + j < len) && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str1[] = "Hello Pisciners";
// 	const char	str2[] = "Pisc";

// 	printf("%s", ft_strnstr(str1, str2, 7));
// }
