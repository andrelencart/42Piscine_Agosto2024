/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:23:32 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 19:58:48 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	i;
	(void)argc;
	
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}	
	write(1, "\n", 1);
	return (0);
}	