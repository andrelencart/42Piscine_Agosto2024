/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:07:00 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 20:22:55 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
	{
		i++;		
	}
	while(str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = sign * - 1;
		}
		i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	 main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Erro");
	printf("mine: %d\n", ft_atoi(argv[1]));
}