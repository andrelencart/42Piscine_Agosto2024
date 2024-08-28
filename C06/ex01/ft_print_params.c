/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:33:07 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 19:49:50 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	l;
	int	n;

	n = 1;
	while(argc > n)
	{
		l = 0;
		while(argv[n][l] != '\0')
		{
			write(1, &argv[n][l], 1);
			l++;		
		}
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
