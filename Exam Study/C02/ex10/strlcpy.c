/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:59:24 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 19:30:32 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	tamanho;

	i = 0;
	tamanho = 0;
	while(src[tamanho] != '\0')
	{
		tamanho++;
	}
	if (size > 0)
	{
		while(src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}	
	}
	dest[i] = '\0';
	return (tamanho);
}

int	main(void)
{
	char	arr[] =  "hello";
	char	arr1[] = "hello word";
	
	printf("%d\n", ft_strlcpy(arr, arr1, 20));
}