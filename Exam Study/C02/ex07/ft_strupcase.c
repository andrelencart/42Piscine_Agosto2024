/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:19:40 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 18:23:56 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return(str);
}

int	main(void)
{
	char	arr[] = "aaRsf^7";
	char *result;
	result = ft_strupcase(arr);
	printf("%s\n", result);
}