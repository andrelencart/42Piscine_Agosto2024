/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:08:28 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/22 14:03:55 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdbool.h>

void	uppercase(char *u)
{
	if (*u >= 'a' && *u <= 'z')
	{
		*u -= 32;
	}
}

int	leternumber(char	*str)
{
	int	i;

	i = 0;
	if (((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 0)
			|| (leternumber(&str[i]) && !leternumber(&str[i - 1])))
		{
			uppercase(&str[i]);
		}
		i++;
	}
	return (str);
}

/*
int	main()
{
	char	arr[] = "salut, 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(arr));
}
*/
