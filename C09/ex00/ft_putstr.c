/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:07:21 by andre             #+#    #+#             */
/*   Updated: 2024/09/17 22:15:02 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/* 
int	main(void)
{
	char*	f = "hdayffewfvsfw";
	
	ft_putstr(f);
	return (0);
} */
