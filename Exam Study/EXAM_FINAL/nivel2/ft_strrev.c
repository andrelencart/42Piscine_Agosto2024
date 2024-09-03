/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:28:45 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/03 18:53:32 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int	len;
	int	i;
	char	swap;

	i = 0;
	len = ft_strlen(str) - 1;
	while(len > i)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char arr[] = "hello";
	printf("%s\n", ft_strrev(arr));
}