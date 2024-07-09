/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:15:17 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/09 12:36:04 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	seg_loop(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	while (c <= '9')
	{
		while (d <= '9')
		{
			print_comb(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	primer_loop(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			seg_loop(a, b);
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	primer_loop();
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
