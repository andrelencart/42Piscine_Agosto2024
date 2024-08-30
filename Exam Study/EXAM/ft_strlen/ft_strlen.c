/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 23:16:53 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 23:20:34 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char arr[] = "arrr";
	printf("%d\n", ft_strlen(arr));
}