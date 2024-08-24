/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:46:08 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/24 22:41:57 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;
	
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		s = str;
		f = to_find;
		
		while(*s && *f && *s == *f)
		{
			s++;
			f++;
			if (*f == '\0')
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	argc = 3;
	printf("sys: %s\n", strstr(argv[1], argv[2]));
	printf("mine: %s\n", ft_strstr(argv[1], argv[2]));
}