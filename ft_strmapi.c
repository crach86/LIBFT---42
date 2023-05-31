/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:46:31 by robferna          #+#    #+#             */
/*   Updated: 2023/05/24 09:16:01 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	s_lenght;
	char			*result;

	if (!s)
		return (NULL);
	s_lenght = ft_strlen(s);
	i = 0;
	while (!s || !f)
		return (NULL);
	result = (char *)malloc(s_lenght * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (i < s_lenght)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	my_function(unsigned int index, char c)
// {
// 	// Exemplo de função que incrementa cada caractere em 1
// 	return c + index;
// }

// int main()
// {
// 	char *input = "Hello, World!";
// 	char *result = ft_strmapi(input, &my_function);

// 	if (result)
// 	{
// 		printf("Input: %s\n", input);
// 		printf("Result: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error: ft_strmapi returned NULL\n");
// 	}

// 	return 0;
// }
