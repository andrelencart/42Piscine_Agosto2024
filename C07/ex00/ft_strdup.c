/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:21:43 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/31 18:14:24 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char	*str_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int	len;
	char *newstr;

	if (src == NULL)
		return (NULL);

	len = str_len(src);
	newstr = (char *)malloc(sizeof(char) * len + 1);
	str_cpy(newstr, src);
	return (newstr);
}

int main() {
    char original[] = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    return 0;
}