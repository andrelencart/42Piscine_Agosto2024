/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:44:39 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/02 15:16:37 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	while (dest[i] != '\0')
		i++;
	if (size <= i)
		return (size + counter);
	while (src[j] != '\0' && (j + i) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + counter);
}

/*
int	main(void)
{
	char a[] = "hello";
	char b[] = " world";
	
	printf("size : %d\n", ft_strlcat(a, b, 10));
	printf("dest : %s\n", a);
}
*/
