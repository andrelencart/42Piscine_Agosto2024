/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:43:32 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/20 22:34:50 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	tamanho;

	tamanho = 0;
	while (*str != '\0')
	{
		str++;
		tamanho++;
	}
	return (tamanho);
}

/*
int	main()
{
	char*	a = "hello world man";
	char	tamanho;
	tamanho = ft_strlen(a);
	printf("size is: %d \n", tamanho);
}
*/
