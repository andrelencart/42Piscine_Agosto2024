/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:26:29 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/04 14:53:29 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_apha(char i)
{
	int repeat;
	
	if (i >= 'a' && i <= 'z')
		repeat = i - 'a' + 1;
	else if (i >= 'A' && i <= 'Z')
		repeat = i - 'A' + 1;
	else
		repeat = 1;
	while(repeat > 0)
	{
		write(1, &i, 1);
		repeat--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			ft_repeat_apha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}