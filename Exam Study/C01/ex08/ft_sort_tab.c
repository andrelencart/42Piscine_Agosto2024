/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:14:25 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 17:18:43 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_tab(int *tab, int size)
{
	int a;
	int i;

	a = 0;
	while (a < size - 1)
	{
		i = 0;
		while (i < size - 1 - a)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		a++;
	}
}

int	main(void)
{
	int arr[] = {-45, 0, -2, 1, 5, 46, 3444};
	ft_sort_tab(&arr[0], 7);
	int	i = 0;
	while(i < 7)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}