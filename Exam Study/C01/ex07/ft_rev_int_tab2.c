/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:38:10 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 16:44:45 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab2(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

int	main(void)
{
	int	arr[] = {9, 8, 7, 6, 5, 4};
	ft_rev_int_tab2(&arr[0], 6);
	int	i = 0;
	while (i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
}