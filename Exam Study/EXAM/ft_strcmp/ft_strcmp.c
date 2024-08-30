/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:12:27 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/30 00:17:10 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return(*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 -*s2);
}

int main(void)
{
	char arr[] = "A";
	char arr1[] = "a";
	printf("%d\n", ft_strcmp(arr, arr1));
}