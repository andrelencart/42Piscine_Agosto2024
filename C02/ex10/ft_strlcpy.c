/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:13:17 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/22 21:57:11 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				tamanho;

	i = 0;
	tamanho = 0;
	while (src[tamanho] != '\0')
	{
		tamanho++;
	}
	if (src[tamanho] == 0)
	{
		return (tamanho);
	}
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

/*
int	main()
{
	char	arr[] = "aeadew";
	char	dest[12];
	ft_strlcpy(dest, arr, 12);
	printf("%d", ft_strlcpy(dest, arr, 12));
}
*/