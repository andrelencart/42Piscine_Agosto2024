/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:29:37 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/05 21:03:48 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
int	repeated2(char *str, char a)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}
void	ft_union(char *str1, char *str2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if(!repeated(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j] != '\0')
	{
		if (!repeated2(str1, str2[j]))
		{
			if (!repeated(str2, str2[j], j))
			{
				write(1, &str2[j], 1);
			}
		}
		j++;
	}
	write(1, "\n", 1);
}

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		ft_union(av[1], av[2]);
	}
}