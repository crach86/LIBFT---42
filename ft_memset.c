/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:18:41 by robferna          #+#    #+#             */
/*   Updated: 2023/05/08 11:09:58 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[50] = "Exercício finalizado";

// 	printf("Antes a frase era: %s \n", str);
// 	ft_memset(str + 10, 'm', 2 * sizeof(char));
// 	printf("A nova frase ficou: %s", str);
// 	return (0);
// }
