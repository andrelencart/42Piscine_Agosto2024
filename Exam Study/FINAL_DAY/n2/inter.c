/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:44:38 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/05 18:50:53 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	repeated(char *str, char a, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

void inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (!repeated(str1, str1[i], i))
				{
					write(1, &str1[i], 1);	
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		inter(av[1], av[2]);
	}
}
