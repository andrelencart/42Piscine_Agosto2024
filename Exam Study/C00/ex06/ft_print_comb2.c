/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:21:48 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 15:40:26 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	int	a;
	int	b;
	char	arr[5];
	
	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			arr[0] = a / 10 + '0';
			arr[1] = a % 10 + '0';
			arr[2] = ' ';
			arr[3] = b / 10 + '0';
			arr[4] = b % 10 + '0';
			write(1, &arr, 5);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
}

