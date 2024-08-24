/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:22:44 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/19 22:20:58 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c[5];

	a = '0';
	b = '1';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c[0] = a / 10 + '0';
			c[1] = a % 10 + '0';
			c[2] = ' ';
			c[3] = b / 10 + '0';
			c[4] = b % 10 + '0';
			write(1, &c, 5);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	} 
}

/*
int	main()
{
	ft_print_comb2();
	write(1, "\n", 2);
}
*\