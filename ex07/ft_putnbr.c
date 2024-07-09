/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:41:38 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/09 12:50:38 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 10)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int		num;

	num = INT_MIN;
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
