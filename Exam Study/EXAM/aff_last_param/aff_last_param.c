/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:47:40 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 22:57:09 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{	
	int	i;

	i = 0;
	if (argc > 1)
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
	write(1, "\n", 1);
	return (0); 
}