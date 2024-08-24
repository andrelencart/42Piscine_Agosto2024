/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:43:17 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/20 18:54:14 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mypow(int tamanho)
{
	int	c;

	c = 1;
	while (tamanho > 0)
	{
		c *= 10;
		tamanho--;
	}
	return (c);
}

int	ft_tamanho(int nb)
{
	int	tamanho;

	tamanho = 0;
	while (nb > 0)
	{
		nb /= 10;
		tamanho++;
	}
	return (tamanho);
}

void	ft_putnbr(int nb)
{
	int		tamanho;
	char	c;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		tamanho = ft_tamanho(nb);
		while (tamanho != 0)
		{
			tamanho--;
			c = nb / mypow(tamanho) + '0';
			nb = nb % mypow(tamanho);
			write(1, &c, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(0);
}
*/
