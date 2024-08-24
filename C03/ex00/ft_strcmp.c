/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:38 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/24 18:10:17 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	total;

	total = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
		total = (*s1 - *s2);
		if (total == 0)
		{
			return (total);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int	main(int argc, char *argv[])
{
	argc = 2;
	printf("sys: %d\n", ft_strcmp(argv[1], argv[2]));
	printf("mine: %d\n", ft_strcmp(argv[1], argv[2]));
}
*/
