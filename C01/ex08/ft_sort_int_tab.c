/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:27:43 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/20 22:50:22 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	e;
	int	d;

	e = 0;
	while (e < size -1)
	{
		d = 0;
		while (d < size - 1 - e)
		{
			if (tab[d] > tab[d + 1])
			{
				swap(&tab[d], &tab[d + 1]);
			}
			d++;
		}
		e++;
	}
}

/*
int	main(void)
{
	int arr[7] = {1, 2, 0, -5, 7, 455, 4};
	ft_sort_int_tab(&arr[0], 7);
	int	i;
	
	i = 0;
	while(i < 7)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
*/
