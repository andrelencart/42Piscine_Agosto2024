/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_lastparam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:18:36 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/05 21:24:42 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;
	int	n;

	i = 0;
	if (ac > 1)
	{
		n = ac - 1;
		while (av[n][i] != '\0')
		{
			write(1, &av[n][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
		
	