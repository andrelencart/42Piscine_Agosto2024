/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:58:05 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/26 20:11:39 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
		
	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] == ' ') 
			|| (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if(str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
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
	printf("sys: %d\n", atoi(argv[1]));
	printf("mine: %d\n", ft_atoi(argv[1]));
}