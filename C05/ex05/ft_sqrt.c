/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:01:08 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 19:12:04 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*
int	main(void)
{
	int nb = 144;
	int result = ft_sqrt(nb);
	printf("the square root of %d is: %d", nb, result);
}
*/