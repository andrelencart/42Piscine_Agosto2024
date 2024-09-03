/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:19:01 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/03 17:25:13 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > -1)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(void)
{
	char arr[] = "hello";

	ft_rev_print(arr);
}