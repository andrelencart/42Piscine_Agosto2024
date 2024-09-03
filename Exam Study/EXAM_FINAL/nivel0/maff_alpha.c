/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:33:44 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/03 16:52:49 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	i;
	int	n;

	i = 'a';
	while (i <= 'z')
	{
		n = i;
		if (i % 2 == 0)
		{
			n -= 32;
			write (1, &n, 1);
		}
		else
			write(1, &i, 1);
		i++;	
	}
	write(1, "\n", 1);
}