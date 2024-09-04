/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:58:47 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/04 18:08:01 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char c)
{
	int repeat;
	
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	while (repeat > 0)
	{
		write(1, &c, 1);
		repeat--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}