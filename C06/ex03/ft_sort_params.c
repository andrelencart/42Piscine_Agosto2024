/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:15:20 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 22:04:38 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{	
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;	
	}
	return (*s1 - *s2);
}	

int	main(int argc, char *argv[])
{
	int	i;
	int j;

	i = 1;
	j = 1;
	while (argc - 1 > i)
	{
		while (argc - 1 > j)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (argc > j)
	{
		putstr(argv[j]);
		putstr("\n");
		j++;
	}
	return (0);
}