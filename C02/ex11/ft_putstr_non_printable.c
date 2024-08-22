/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:42:36 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/22 21:57:43 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	putnumbr(char c)
{
	write(1, &c, 1);
}

void	hexdec(unsigned char n)
{
	char	*hexdec;

	hexdec = "0123456789abcdef";
	putnumbr('\\');
	putnumbr(hexdec[n / 16]);
	putnumbr(hexdec[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			putnumbr(str[i]);
		}
		else
		{
			hexdec(str[i]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}
*/
