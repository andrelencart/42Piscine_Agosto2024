/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:20:13 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 16:26:02 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr2(int nb)
{
	char	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr2(nb / 10);
		ft_putnbr2(nb % 10);
	}
	else
	{
		number = nb + '0';
		write(1, &number, 1);
	}
}

int	main(void)
{
	ft_putnbr2(0);
}