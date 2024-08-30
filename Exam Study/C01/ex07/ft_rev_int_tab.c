/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:28:36 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 16:37:46 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
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
	int arr[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(&arr[0], 6);
	int	i = 0;
	while (i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
}