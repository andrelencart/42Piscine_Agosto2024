/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:21:11 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/30 00:31:44 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 0;
	if (argc != 4)
		write(1, "\n", 1);
		return (0);
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
		write(1, "\n", 1);
		return (0);
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}