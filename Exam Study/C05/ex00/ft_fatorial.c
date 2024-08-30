/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatorial.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:52:48 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 20:57:39 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_factorial(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return(result);
}

int	main(void)
{
	int	number;

	number = 8;
	printf("%d\n", ft_factorial(number));
}