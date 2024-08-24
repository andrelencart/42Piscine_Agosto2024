/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:44:39 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/25 00:10:24 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tamanho_src;
	unsigned int	tamanho_dest;

	tamanho_dest = 0;
	tamanho_src = 0;
	while (src[tamanho_src] != '\0')
		tamanho_src++;
	while (dest[tamanho_dest] != '\0' && tamanho_dest < size)
		tamanho_dest++;
	if (size <= tamanho_dest)
		return (size + tamanho_src);
	i = 0;
	j= 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && tamanho_dest < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tamanho_dest + tamanho_src);
}

int	main(int argc, char *argv[])
{
	argc = 3;
	printf("mine: %d\n", ft_strlcat(argv[1], argv[2], 2));
}