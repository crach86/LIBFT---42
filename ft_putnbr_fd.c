/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:01:50 by robferna          #+#    #+#             */
/*   Updated: 2023/05/08 12:33:09 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	unit;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unit = (n % 10) * -1 + '0';
	}
	else
	{
		unit = (n % 10) + '0';
	}
	n = n / 10;
	if (n < 1)
	{
		n = n * -1;
	}
	if (n != 0)
	{
		ft_putnbr_fd (n, fd);
	}
	ft_putchar_fd (unit, fd);
}
