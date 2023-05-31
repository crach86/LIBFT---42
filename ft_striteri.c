/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:47:57 by robferna          #+#    #+#             */
/*   Updated: 2023/05/22 19:34:13 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void	test(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

// int	main(void)
// {
// 	char	str[] = "Hello, world!";

// 	printf("Antes: %s\n", str);
// 	ft_striteri(str, test);
// 	printf("Depois: %s\n", str);
// 	return (0);
// }
