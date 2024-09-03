/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:13:13 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/03 17:18:31 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	a = 2;
	int	b = 4;

	ft_swap(&a, &b);
	printf("%d, %d", a, b);
}