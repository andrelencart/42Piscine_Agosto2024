/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:39:45 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/01 19:35:35 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		arr = (char *)malloc(1);
		if (arr != NULL)
			arr[0] = '\0';
		return (arr);
	}
	len = ft_total_len(size, strs, sep);
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

/*
int main(void)
{
	char *strs[] = {"Hello", "world", "what", "the", "HELL"};
	char *sep = " ";
	int size = 5;
	
	char *result = ft_strjoin(size, strs, sep);
	if (result != NULL)
	{
		printf("str junta: %s\n", result);
		free(result);
	}
	else
	{
		printf("failed.\n");
	}

	return 0;
}
*/