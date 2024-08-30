/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:45:28 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 17:13:01 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int arr[] = {1, -3, 7, 5, 455, 0};
	ft_sort_int_tab(&arr[0], 6);
	int	i = 0;
	while (i < 6)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}