/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:25:13 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 18:43:26 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	uppercase(char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a -= 32;
}

int	alphanumeric(char *str)
{
	int	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') 
		|| (str[i] >= '0' && str[i] <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 0 || (alphanumeric(&str[i]) && !alphanumeric(&str[i - 1])))
		{
			uppercase(&str[i]);
		}
		if (str[i] <= 'A' && str[i] >= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(arr));
}