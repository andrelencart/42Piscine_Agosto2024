/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:58:51 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/21 18:35:13 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}	

/*
int	main()
{
	char	a[11] = "hello world";
	char dest[12];
	ft_strcpy(dest, a);
	int i;
	i = 0;
	while(i < 12)
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
*/
