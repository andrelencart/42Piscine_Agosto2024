/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:57:49 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/31 19:14:43 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	
	size = max - min;
	
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int main(void) 
{
    int min = 3;
    int max = 10;
    int *range;
    int i;
    int size;

    range = ft_range(min, max);

    if (range == NULL) {
        printf("Failed.\n");
        return 1;
    }

    size = max - min;
    for (i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    return 0;
}