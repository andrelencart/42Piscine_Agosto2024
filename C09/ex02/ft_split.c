/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:44:06 by andre             #+#    #+#             */
/*   Updated: 2024/09/25 00:05:01 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_charset(char c, char *charset)
{
	while(*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	n;
	int	cnt;
	int	i;

	i = 0;
	n = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if ((!is_charset(*str, charset) && n == 0))
		{
			n = 1;
			cnt++;
		}
		else if (is_charset(*str, charset))
		{
			n = 0;
		}
		str++;
	}
	return (cnt);
}

char *copy_str(char *start, int len)
{
	char *new_str;
	int	i;

	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return NULL;
	i = 0;
	while (i < len)
	{
		new_str[i] = start[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char **ft_split(char *str, char *charset)
{
	int	cnt_str; char	**result; int	strn; int	len; char	*start;

	cnt_str = count_str(str, charset);
	result = (char **)malloc(sizeof(char *) * (cnt_str + 1));
	if (!result)
		return NULL;
	strn = 0;
	while (*str)
	{
		//Test if string element is a word start
		if (!is_charset(*str, charset))
		{
			start = str;
			len = 0;
			//Increments the word
			while (*str && !is_charset(*str, charset))
			{
				len++;
				str++;
			}
			result[strn] = copy_str(start, len);
			if (!result[strn])
				return NULL;
			strn++;
		}
		if (*str == '\0')
			break;
		str++;
	}
	result[strn] = '\0';
	return (result);
}
/*
int main(void) {
    char str[] = "Hello, world; this ,is a,test, asdasd, FUCKKK";
    char charset[] = ",; ";

    char **result = ft_split(str, charset);
	//printf("size: %ld\n", sizeof(result) / sizeof(result[0]));
    for (int i = 0; result[i]; i++) {
        printf("String[%d]: %s\n", i, result[i]);
    }
    free(result); // Free the result array itself

    return 0;
}
*/
