/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:56:44 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/20 21:59:44 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size / 2)
	{
		swap = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = swap;
		a++;
	}
}

/*
int	main(void)
{
	int arr[6] = {5, -3, 2, 1, 0, 4};
	ft_rev_int_tab(&arr[0], 6);
	int i;

	i = 0;
	while (i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
}
*/
