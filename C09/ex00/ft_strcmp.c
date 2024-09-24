/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:15:17 by andre             #+#    #+#             */
/*   Updated: 2024/09/17 22:45:57 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 != '\0' || *s2 != '\0')
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


/* int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (printf("Erro\n"));
	}
	else
	{
		printf("sys: %d\n", ft_strcmp(argv[1], argv[2]));
		printf("mine: %d\n", ft_strcmp(argv[1], argv[2]));
	}
} */