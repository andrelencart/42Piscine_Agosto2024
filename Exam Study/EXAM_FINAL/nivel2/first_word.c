/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:26:06 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/03 18:26:30 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == 9))
			i++;
		while(argv[1][i] != '\0' && (argv[1][i] >= 33 && argv[1][i] <= 126))
		{
			write(1, &argv[1][i], 1);
			if(argv[1][i + 1] == ' ')
				break ;
			i++;
		}
	}
	write(1, "\n", 1);
}