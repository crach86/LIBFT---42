/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:03:28 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 17:51:23 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *str1 = "Hello";
// 	const char *str2 = "Hellw";

// 	int result = ft_strncmp(str1, str2, 5);

// 	if (result == 0)
// 	{
// 		printf("As strings são iguais.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("%i", result);
// 		printf("A primeira string é menor que a segunda.\n");
// 	}
// 	else
// 	{
// 		printf("A primeira string é maior que a segunda.\n");
// 	}

// 	return 0;
// }
