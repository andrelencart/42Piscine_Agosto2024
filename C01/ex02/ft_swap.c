/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:51:37 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/19 22:18:49 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main()
{
	int x = 2;
	int y = 4;

	printf("x: %d, y: %d\n", x, y);
	ft_swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
}
*/