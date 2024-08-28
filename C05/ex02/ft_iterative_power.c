/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:37:54 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 19:14:50 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}

/*
int	main(void)
{
	int nb = 2;
	int power = 4;
	int result = ft_iterative_power(nb, power);
	printf("%d to the power of %d is: %d", nb, power, result);
}
*/