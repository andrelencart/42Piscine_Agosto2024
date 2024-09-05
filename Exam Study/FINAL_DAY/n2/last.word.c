/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:52:46 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/05 20:27:29 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int	ft_space(char a)
{
	if(a == ' ' || a == 9 || a == '\0')
		return (1);
	return (0);
}

int	ft_print(char a)
{
	if (a >= 33 && a <= 126)
		return(1);
	return (0);
}

void last_word(char *str)
{
	int	i;

	i = ft_strlen(str);
	while (ft_space(str[i]))
		i--;
	while (ft_print(str[i]))
		i--;
	while (ft_space(str[i]))
	{
		i++;
		break;
	}
	while (ft_print(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
	while(ft_space(str[i]))
		break;
	write(1, "\n", 1);
}
int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		last_word(av[1]);
	}
}