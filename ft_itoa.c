/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:23:48 by robferna          #+#    #+#             */
/*   Updated: 2023/05/23 20:07:49 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

static int	int_lenght(long int n)
{
	unsigned int	int_lenght;

	int_lenght = 1;
	if (n < 0)
	{
		int_lenght++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		int_lenght++;
	}
	return (int_lenght);
}

static char	*isnegative(int n)
{
	char		*str;
	long int	nbr;
	int			len;
	int			i;

	i = 0;
	nbr = n;
	len = int_lenght(nbr);
	str = (char *)malloc(sizeof(char) * int_lenght(nbr) + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	nbr = nbr * -1;
	while (nbr > 9)
	{
		str[len - i - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i++;
	str[len - i] = nbr + '0';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			len;
	int			i;

	i = 0;
	nbr = n;
	len = int_lenght(nbr);
	if (n < 0)
		return (isnegative(n));
	str = (char *)malloc(sizeof(char) * int_lenght(nbr) + 1);
	if (!str)
		return (NULL);
	while (nbr > 9)
	{
		str[len - i - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i++;
	str[len - i] = nbr + '0';
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("O valor é %s", ft_itoa(0));
// }
