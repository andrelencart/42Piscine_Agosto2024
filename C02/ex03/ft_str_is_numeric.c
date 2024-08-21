/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:22:30 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/21 20:31:52 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main()
{
	char	arr[] = "34324";
	int	l = ft_str_is_numeric(arr);
	printf("%d", l);
}
*/