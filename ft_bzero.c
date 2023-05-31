/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:04:00 by robferna          #+#    #+#             */
/*   Updated: 2023/05/08 11:10:32 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	str [] = "Abacaxi";

// 	printf("Antes a frase era: %s \n", str);
// 	ft_bzero(str + 2, 1 * sizeof(char));
// 	printf("A nova frase ficou: %s", str);
// }
