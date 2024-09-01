/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:03:43 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/01 19:34:25 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < size)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
		return (i);
	}
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int size;
	int	i;

	i = 0;
	min = 2;
	max = 10;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
}
*/