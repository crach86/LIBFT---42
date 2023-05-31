/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:58:32 by robferna          #+#    #+#             */
/*   Updated: 2023/05/16 18:24:58 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*st1;
	const unsigned char	*st2;

	st1 = s1;
	st2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char	st1[] = "A";
// 	char	st2[] = "A";
// 	int		result;
// 	result = ft_memcmp(st1, st2, 1);
// 	if (result > 0)
// 	{
// 		printf("st2 is less than st1");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("st1 is less than st2");
// 	}
// 	else
// 	{
// 		printf("st1 is equal to st2");
// 	}
// }
