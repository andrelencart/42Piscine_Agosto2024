/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:23:04 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/05 16:03:41 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	
	while(i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return (str);
}

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
	}
	else
		printf("%s\n", ft_strrev(av[1]));
}