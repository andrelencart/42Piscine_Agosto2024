/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:35:50 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/30 01:11:22 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_abc(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		write(1, "\n", 1);
		return (str);
	}
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
			if (str[i + 1] != '\0')
				write(1, " ", 1);
		i++;
	}	
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	ft_abc(argv[1]);
	return (0);
	
}
/*
*/
